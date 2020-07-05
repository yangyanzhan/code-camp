# These are online judge websites we want to use:
# ---
# "leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit", "rosetta"
# Now I'm focused on interviewbit and rosetta!

#                  0           1            2             3           4             5            6            7             8
my @judges = ["leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit", "rosetta"];

my @third-party-solutions = ["rosetta"];

use lib '.';
use my-config;

my $judge;

sub generate-judge() {
  my $judge-idx = get-judge-idx();
  if $judge-idx < 0 || $judge-idx >= @judges.elems {
      say "error: unknown judge.";
      exit 1;
  }
  $judge = @judges[$judge-idx];
}

my $is-third-party-solution = @third-party-solutions.first($judge, :k).defined;

my $cpp-extension = ".cpp";
my $raku-extension = ".raku";
my $contributor-disclaimer = "Other Raku Contributors";
my $contributor-disclaimer's = "Other Raku Contributors' solution";

my @sitemap-lines = ["<?xml version=\"1.0\" encoding=\"UTF-8\"?>
<urlset xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:schemaLocation=\"http://www.sitemaps.org/schemas/sitemap/0.9 http://www.sitemaps.org/schemas/sitemap/0.9/sitemap.xsd\" xmlns=\"http://www.sitemaps.org/schemas/sitemap/0.9\">"];

sub my-fetch($filename) {
  if $filename eq "" {
      say "error: filename is empty.";
      return ;
  }

  my $template = "./tools/cpp-template.cpp".IO.slurp;

  $template ~~ s:g/\{\{judge\}\}/$judge/;
  $template ~~ s:g/\{\{filename\}\}/$filename/;

  my $path = "./$judge/c++/$filename.cpp";
  if $path.IO.e {
      say "error: solution already exists.";
      exit 1;
  }
  spurt $path, $template;
  my $cmd = "printf '$path' | pbcopy";
  say $path;
  shell $cmd;
}

sub my-submit() {
  my $proc = shell "git status --porcelain", :out;
  my $str = $proc.out.slurp: :close;
  my $match = $str ~~ /(<-[\/]>+)\.cpp/;
  my $title = $match[0].Str.comb(/<-[\-]>+/).join(" ");
  my $cmd = "git add . && git commit -m \"add Yanzhan\'s cpp solution for the $title problem on { $judge.lc }\"";
  shell $cmd;
}

sub my-info() {
  my $proc = shell "git status --porcelain", :out;
  my $str = $proc.out.slurp: :close;
  my $match = $str ~~ /(<-[\/]>+)\.cpp/;
  my $path = "./{ $judge.lc }/c++/{ $match[0].Str }.cpp";
  my $cmd = "printf '$path' | pbcopy";
  say $path;
  shell $cmd;
}

sub my-build() {
  # clear workspace
  my $cmd = "cd build && rm -rf * && cd ..";
  shell $cmd;

  # roots of solutions
  my @roots = [["leetcode", "leetcode/c++", $cpp-extension], ["codesignal", "codesignal/c++", $cpp-extension], ["codewars", "codewars/c++", $cpp-extension], ["hackerrank", "hackerrank/c++", $cpp-extension], ["interviewbit", "interviewbit/c++", $cpp-extension], ["exercism", "exercism/raku", $raku-extension], ["rosetta", "rosetta/raku", $raku-extension]];
  for @roots -> @root {
      my $name = @root[0];
      my $path = @root[1];
      my $extension = @root[2];
      my $is-third-party-solution = @third-party-solutions.first($name, :k).defined;
      # setup root
      $cmd = "mkdir -p build/{$name}";
      shell $cmd;
      # generate the index of the root page
      my @lines = ["<head><title>{$name} solutions</title><link rel=\"stylesheet\" href=\"/style.css\"><script src=\"/main.js\"></script></head><body>"];
      if ($is-third-party-solution) {
        @lines.push("<h2>{$name} solutions by {$contributor-disclaimer}</h2>");
      } else {
        @lines.push("<h2>{$name} solutions by Yanzhan</h2>");
      }
      @lines.push("<ul>");
      for dir($path).grep( { $_.contains($extension) } ) -> $file {
          my $filename = $file.substr($path.chars + 1, $file.chars - $path.chars - $extension.chars - 1);
          # add to index page
          @lines.push("<li><a href='/{$name}/{$filename}.html' target='_blank'>{$filename.split("-").join(" ")}</a></li>");
          # add to sitemap
          @sitemap-lines.push('<url>');
          @sitemap-lines.push("<loc>https://yanzhan.site/{$name}/{$filename}.html</loc>");
          @sitemap-lines.push('</url>');
          # generate landing page
          if ($extension eq $cpp-extension) {
            gen-cpp($file, $filename, $name, $path);
          } elsif ($extension eq $raku-extension) {
            gen-raku($file, $filename, $name, $path);
          }
      }
      # complete and save index page
      @lines.append("</ul></body>");
      spurt "build/{$name}/index.html", @lines.join("\n");
  }
  # complete and save sitemap
  @sitemap-lines.push('</urlset>');
  spurt "build/sitemap.xml", @sitemap-lines.join("\n");
  # copy pre build pages
  $cmd = "cp -r ./pre-build/* ./build";
  shell $cmd;
  # copy workspace to my github repo for distribution
  $cmd = "cp -r build/* ../yangyanzhan.github.io";
  shell $cmd;
}

sub MAIN($action, $filename = "") {
    if $action eq "fetch" {
        my-fetch($filename);
    } elsif $action eq "submit" {
        my-submit();
    } elsif $action eq "info" {
        my-info();
    } elsif $action eq "build" {
        my-build();
    } else {
        say "error: unknown action.";
    }
}

sub gen-cpp($file, $filename, $judge-name, $judge-path) {
    my $is-third-party-solution = @third-party-solutions.first($judge-name, :k).defined;
    my $content = $file.slurp.trim;
    my $cnt = 0;
    my @parts1 = $content.split("\n");
    my @parts-tmp;
    for 0..^@parts1.elems -> $i {
        my $part = @parts1[$i].trim;
        if $part.chars == 0 {
            $cnt++;
        } elsif $part.chars >= 2 && $part.substr(0, 2) eq "//" {
            my $item = $part.substr(2).trim;
            my $k1 = "(Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber";
            my $v1 = "<a href=\"https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber\" target=_blank>[Yanzhan Yang's Youtube Channel]</a>";
            my $k2 = "(Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan";
            my $v2 = "<a href=\"https://twitter.com/YangYanzhan\" target=_blank>[Yanzhan Yang's Twitter]</a>";
            my $k3 = "(Yanzhan Yang's GitHub HomePage) : https://yanzhan.site";
            my $v3 = "<a href=\"https://github.com/yangyanzhan/code-camp\" target=_blank>[Yanzhan Yang's GitHub Project]</a>";
            $item ~~ s/"{$k1}"/$v1/;
            $item ~~ s/"{$k2}"/$v2/;
            $item ~~ s/"{$k3}"/$v3/;
            if $item.contains("Blog URL for this problem") {
                $item = "";
            }
            if $item.contains("For this specific algothmic problem, visit my Youtube Video") {
              if !$item.contains("http") {
                $item = "";
              } else {
                $item ~~ s:s/ \.$//;
                $item = $item.trim;
                $item ~~ s:s/(http\S*)$/<a href=\"$0\" target=_blank>[{$0}]<\/a> ./;
              }
            }
            if $item.contains("Disclaimer") {
              $item ~~ s:s/(http\S*)/<a href=\"$0\" target=_blank>[{$0}]<\/a>/;
            }
            $item = $item.trim;
            if $item.chars > 0 {
                @parts-tmp.push: $item;
            }
            $cnt++;
        } else {
            last;
        }
    }
    my @parts2 = @parts1[$cnt..*];
    @parts1 = @parts-tmp;
    my $title = $filename.split("-").join(" ");
    my $disclaimer's = "Yanzhan's solution";
    if $is-third-party-solution {
      $disclaimer's = $contributor-disclaimer's;
    }
    my @solution-lines = ["<head><title>{$title}</title></head>", "<body>", "<link rel=\"stylesheet\" href=\"/third-party/highlight/solarized-dark.css\">", "<script src=\"/third-party/highlight/highlight.js\"></script>", "<script>hljs.initHighlightingOnLoad();</script>", "<h2>{$disclaimer's} for \"{$title}\"</h2>", "<ul>", @parts1.map( { "<li>{$_}</li>" } ).join("\n"), "</ul>", "<pre class=\"code-hidden\"><code class=\"c++\">", @parts2.join("\n"), "</code></pre>",
      "<link rel=\"stylesheet\" href=\"/style.css\">",
      "<script src=\"/main.js\"></script>",
      "</body>"
    ];
    $content = @solution-lines.join("\n");
    spurt "build/{$judge-name}/{$filename}.html", $content;
}

sub gen-raku($file, $filename, $judge-name, $judge-path) {
    my $is-third-party-solution = @third-party-solutions.first($judge-name, :k).defined;
    my $content = $file.slurp.trim;
    my $cnt = 0;
    my @parts1 = $content.split("\n");
    my @parts-tmp;
    for 0..^@parts1.elems -> $i {
        my $part = @parts1[$i].trim;
        if $part.chars == 0 {
            $cnt++;
        } elsif $part.chars >= 1 && $part.substr(0, 1) eq "#" {
            my $item = $part.substr(1).trim;
            my $k1 = "(Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber";
            my $v1 = "<a href=\"https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber\" target=_blank>[Yanzhan Yang's Youtube Channel]</a>";
            my $k2 = "(Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan";
            my $v2 = "<a href=\"https://twitter.com/YangYanzhan\" target=_blank>[Yanzhan Yang's Twitter]</a>";
            my $k3 = "(Yanzhan Yang's GitHub HomePage) : https://yanzhan.site";
            my $v3 = "<a href=\"https://github.com/yangyanzhan/code-camp\" target=_blank>[Yanzhan Yang's GitHub Project]</a>";
            $item ~~ s/"{$k1}"/$v1/;
            $item ~~ s/"{$k2}"/$v2/;
            $item ~~ s/"{$k3}"/$v3/;
            if $item.contains("Blog URL for this problem") {
                $item = "";
            }
            if $item.contains("For this specific algothmic problem, visit my Youtube Video") {
              if !$item.contains("http") {
                $item = "";
              } else {
                $item ~~ s:s/ \.$//;
                $item = $item.trim;
                $item ~~ s:s/(http\S*)$/<a href=\"$0\" target=_blank>[{$0}]<\/a> ./;
              }
            }
            if $item.contains("Disclaimer") {
              $item ~~ s:s/(http\S*)/<a href=\"$0\" target=_blank>[{$0}]<\/a>/;
            }
            $item = $item.trim;
            if $item.chars > 0 {
                @parts-tmp.push: $item;
            }
            $cnt++;
        } else {
            last;
        }
    }
    my @parts2 = @parts1[$cnt..*];
    @parts1 = @parts-tmp;
    my $title = $filename.split("-").join(" ");
    my $disclaimer's = "Yanzhan's solution";
    if $is-third-party-solution {
      $disclaimer's = $contributor-disclaimer's;
    }
    my @solution-lines = ["<head><title>{$title}</title></head>", "<body>", "<link rel=\"stylesheet\" href=\"/third-party/highlight/solarized-dark.css\">", "<script src=\"/third-party/highlight/highlight.js\"></script>", "<script>hljs.initHighlightingOnLoad();</script>", "<h2>{$disclaimer's} for \"{$title}\"</h2>", "<ul>", @parts1.map( { "<li>{$_}</li>" } ).join("\n"), "</ul>", "<pre class=\"code-hidden\"><code class=\"perl\">", @parts2.join("\n"), "</code></pre>",
      "<link rel=\"stylesheet\" href=\"/style.css\">",
      "<script src=\"/main.js\"></script>",
      "</body>"
    ];
    $content = @solution-lines.join("\n");
    spurt "build/{$judge-name}/{$filename}.html", $content;
}
