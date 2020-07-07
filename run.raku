# These are online judge websites we want to use:
# ---
# "leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit", "rosetta"
# Now I'm focused on interviewbit and rosetta!

#                  0           1            2             3           4             5            6            7             8
my @judges = ["leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit", "rosetta"];

my @third-party-solutions = ["rosetta"];

my @raku-solutions = ["exercism", "rosetta"];

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

generate-judge();

my $is-third-party-solution = @third-party-solutions.first($judge, :k).defined;

my $cpp-extension = ".cpp";
my $raku-extension = ".raku";
my $contributor-disclaimer = "Other Raku Contributors";
my $contributor-disclaimer's = "Other Raku Contributors' solution";

my $cpp-language = "c++";
my $raku-language = "raku";

my %language-highlight-classes = [
    "{$cpp-language}" => "c++",
    "{$raku-language}" => "",
];

my %language-comment-signs = [
    "{$cpp-language}" => "//",
    "{$raku-language}" => "#",
];

my $github-page-directory = "yangyanzhan.github.io";

my @sitemap-lines = ["<?xml version=\"1.0\" encoding=\"UTF-8\"?>
<urlset xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:schemaLocation=\"http://www.sitemaps.org/schemas/sitemap/0.9 http://www.sitemaps.org/schemas/sitemap/0.9/sitemap.xsd\" xmlns=\"http://www.sitemaps.org/schemas/sitemap/0.9\">"];

sub my-fetch($filename) {
    if $filename eq "" {
        say "error: filename is empty.";
        return ;
    }

    my $language = $cpp-language;
    if @raku-solutions.first($judge, :k).defined {
        $language = $raku-language;
    }

    my $template = "./tools/cpp-template.cpp".IO.slurp;
    if $language eq $raku-language {
        $template = "./tools/raku-template.raku".IO.slurp;
        if $is-third-party-solution {
            $template = "./tools/rosetta-raku-template.raku".IO.slurp;
        }
    }

    $template ~~ s:g/\{\{judge\}\}/$judge/;
    $template ~~ s:g/\{\{filename\}\}/$filename/;

    my $path = "./$judge/c++/$filename.cpp";
    if $language eq $raku-language {
        $path = "./$judge/raku/$filename.raku";
    }
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
    if !$match {
        $match = $str ~~ /(<-[\/]>+)\.raku/;
    }
    if !$match {
        say "error: language not known.";
        exit 1;
    }
    my $title = $match[0].Str.comb(/<-[\-]>+/).join(" ");
    my $cmd = "git add . && git commit -m \"add Yanzhan\'s solution for the $title problem on { $judge.lc }\"";
    if $is-third-party-solution {
        $cmd = "git add . && git commit -m \"add other contributors' solution for the $title problem on { $judge.lc }\"";
    }
    shell $cmd;
}

sub my-info() {
    my $proc = shell "git status --porcelain", :out;
    my $str = $proc.out.slurp: :close;
    my $match = $str ~~ /(<-[\/]>+)\.cpp/;
    my $path;
    if $match {
        $path = "./{ $judge.lc }/c++/{ $match[0].Str }.cpp";
    } else {
        $match = $str ~~ /(<-[\/]>+)\.raku/;
        if $match {
            $path = "./{ $judge.lc }/raku/{ $match[0].Str }.raku";
        } else {
            say "error: language not known.";
            exit 1;
        }
    }
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
                gen-solution($file, $filename, $name, $path, $cpp-language);
            } elsif ($extension eq $raku-extension) {
                gen-solution($file, $filename, $name, $path, $raku-language);
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
    # clear github repo
    $cmd = "set -x && ls ../{$github-page-directory} | xargs -I % sh -x -c 'rm -rf ../{$github-page-directory}/%'";
    shell $cmd;
    # copy workspace to my github repo for distribution
    $cmd = "cp -r build/* ../{$github-page-directory}";
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

sub gen-solution($file, $filename, $judge-name, $judge-path, $language) {
    # setup variables
    my $comment-sign = %language-comment-signs{$language};
    my $highlight-class = %language-highlight-classes{$language};
    my $is-third-party-solution = @third-party-solutions.first($judge-name, :k).defined;
    my $content = $file.slurp.trim;
    my $cnt = 0;
    my @parts1 = $content.split("\n");
    my @parts-tmp;
    my $video-url;
    # handle comment lines
    for 0..^@parts1.elems -> $i {
        my $part = @parts1[$i].trim;
        if $part.chars == 0 {
            $cnt++;
        } elsif $part.chars >= $comment-sign.chars && $part.substr(0, $comment-sign.chars) eq $comment-sign {
            my $item = $part.substr($comment-sign.chars).trim;
            # handle social network urls
            my $k1 = "(Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber";
            my $v1 = "<a href=\"https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber\" target=_blank>[Yanzhan Yang's Youtube Channel]</a>";
            my $k2 = "(Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan";
            my $v2 = "<a href=\"https://twitter.com/YangYanzhan\" target=_blank>[Yanzhan Yang's Twitter]</a>";
            my $k3 = "(Yanzhan Yang's GitHub HomePage) : https://yanzhan.site";
            my $v3 = "<a href=\"https://github.com/yangyanzhan/code-camp\" target=_blank>[Yanzhan Yang's GitHub Project]</a>";
            $item ~~ s/"{$k1}"/$v1/;
            $item ~~ s/"{$k2}"/$v2/;
            $item ~~ s/"{$k3}"/$v3/;
            # remove github solution url
            if $item.contains("Blog URL for this problem") {
                $item = "";
            }
            # handle youtube url
            if $item.contains("For this specific algothmic problem, visit my Youtube Video") {
                if !$item.contains("http") {
                    $item = "";
                } else {
                    $item ~~ s:s/ \.$//;
                    $item = $item.trim;
                    $item ~~ s:s/(http\S*)$/<a href=\"$0\" target=_blank>[{$0}]<\/a> ./;
                    $video-url = $0;
                }
            }
            # handle url in disclaimer
            if $item.contains("Disclaimer") {
                $item ~~ s:s/(http\S*)/<a href=\"$0\" target=_blank>[{$0}]<\/a>/;
            }
            # clean item and add item to comment lines
            $item = $item.trim;
            if $item.chars > 0 {
                @parts-tmp.push: $item;
            }
            $cnt++;
        } else {
            last;
        }
    }
    # generate code lines
    my @parts2 = @parts1[$cnt..*];
    # generate comment lines
    @parts1 = @parts-tmp;
    # generate title
    my $title = $filename.split("-").join(" ");
    # generate disclaimer
    my $disclaimer's = "Yanzhan's solution";
    if $is-third-party-solution {
        $disclaimer's = $contributor-disclaimer's;
    }
    # generate video lines
    my $video-lines = "
        <div>
        </div>
    ";
    if $video-url.defined {
        my $k = "https://youtu.be/";
        my $v = "https://www.youtube.com/embed/";
        $video-url ~~ s/$k/$v/;
        $video-lines = "
            <div class=\"video-wrapper yanzhan-hidden\">
                <iframe class=\"video-item\" src=\"{$video-url}\" frameborder=\"0\" allow=\"accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture\" allowfullscreen>
                </iframe>
            </div>
        ";
    }
    for 0..^@parts2.elems -> $i {
        my $k = "<";
        my $v = "&lt;";
        @parts2[$i] ~~ s/$k/$v/;
    }
    # generate footers;
    my @footers = [
        "<a href=\"/index.html\" target=_blank>[Go Back To HomePage]</a>",
        "<a href=\"/{$judge-name}\" target=_blank>[Go Back To Solution List Page]</a>",
    ];
    # generate solution lines
    my @solution-lines = [];
    @solution-lines.push: "<head><title>{$title}</title>";
    @solution-lines.push: "<link rel=\"stylesheet\" href=\"/style.css\">";
    @solution-lines.push: "</head>", "<body>";
    @solution-lines.push: "<link rel=\"stylesheet\" href=\"/third-party/highlight/solarized-dark.css\">";
    @solution-lines.push: "<script src=\"/third-party/highlight/highlight.js\"></script>";
    @solution-lines.push: "<script>hljs.initHighlightingOnLoad();</script>";
    @solution-lines.push: "<h2>{$disclaimer's} for \"{$title}\"</h2>";
    @solution-lines.push: "<ul>";
    @solution-lines.push: @parts1.map( { "<li>{$_}</li>" } ).join("\n");
    @solution-lines.push: "</ul>";
    @solution-lines.push: $video-lines;
    if $highlight-class.chars > 0 {
        @solution-lines.push: "<pre class=\"yanzhan-hidden\"><code class=\"{$highlight-class}\">" ~ @parts2.grep({$_.trim.chars > 0}).join("\n");
        @solution-lines.push: "</code></pre>";
    } else {
        @solution-lines.push: "<pre class=\"yanzhan-hidden no-highlight-background\">" ~ @parts2.grep({$_.trim.chars > 0}).join("\n");
        @solution-lines.push: "</pre>";
    }
    @solution-lines.push: "<ul class=\"yanzhan-hidden\">";
    @solution-lines.push: @footers.map( { "<li>{$_}</li>" } ).join("\n");
    @solution-lines.push: "</ul>";
    @solution-lines.push: "<script src=\"/main.js\"></script>";
    @solution-lines.push: "</body>";
    # save solution to html file
    $content = @solution-lines.join("\n");
    spurt "build/{$judge-name}/{$filename}.html", $content;
}
