# These are online judge websites we want to use:
# ---
# "leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit"
# Now I'm focused on leetcode!

#                  0           1            2             3           4             5            6            7
my @judges = ["leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit"];

use lib '.';
use my-config;
use Text::Markdown;

sub gen-cpp($file, $filename, $judge-name, $judge-path) {
    my $content = $file.slurp.trim;
    # my $md = Text::Markdown.new($content);
    # $content = $md.to_html;
    my $cnt = 0;
    my @parts1 = $content.split("\n");
    my @parts-tmp;
    for 0..^@parts1.elems -> $i {
        my $part = @parts1[$i].trim;
        if $part.chars == 0 {
            $cnt++;
        } elsif $part.chars >= 2 && $part.substr(0, 2) eq "//" {
            my $item = $part.substr(2).trim;
            @parts-tmp.push: $item;
            $cnt++;
        } else {
            last;
        }
    }
    my @parts2 = @parts1[$cnt..*];
    @parts1 = @parts-tmp;
    my $title = $filename.split("-").join(" ");
    my @solution-lines = ["<head><title>{$title}</title></head>", '<body>', '<link rel="stylesheet" href="/third-party/highlight/default.css">', '<script src="/third-party/highlight/highlight.js"></script>', '<script>hljs.initHighlightingOnLoad();</script>', "<h2>Yanzhan's solution for \"{$title}\"</h2>", '<ul>', @parts1.map( { "<li>{$_}</li>" } ).join("\n"), '</ul>', '<pre><code class="c++">', @parts2.join("\n"), '</code></pre>', '<!-- Google Analytics -->
    <script>
        (function (i, s, o, g, r, a, m) {
            i["GoogleAnalyticsObject"] = r;
            (i[r] =
                i[r] ||
                function () {
                    (i[r].q = i[r].q || []).push(arguments);
                }),
            (i[r].l = 1 * new Date());
            (a = s.createElement(o)), (m = s.getElementsByTagName(o)[0]);
            a.async = 1;
            a.src = g;
            m.parentNode.insertBefore(a, m);
        })(window, document, "script", "https://www.google-analytics.com/analytics.js", "ga");
        ga("create", "UA-73731579-2", "auto");
        ga("send", "pageview");
    </script>', '</body>'
];
    $content = @solution-lines.join("\n");
    spurt "build/{$judge-name}/{$filename}.html", $content;
}

sub MAIN($action, $filename = "") {
    # my $judge-idx = ".config".IO.slurp.Int;
    my $judge-idx = get-judge-idx();
    if $judge-idx < 0 || $judge-idx >= @judges.elems {
        say ".config error";
        return ;
    }
    my $judge = @judges[$judge-idx];
    if $action eq "fetch" {
        if $filename eq "" {
            say "error";
            return ;
        }

        my $template = "tools/cpp-template.cpp".IO.slurp;

        $template ~~ s:g/\{\{judge\}\}/$judge/;
        $template ~~ s:g/\{\{filename\}\}/$filename/;

        my $path = "./$judge/c++/$filename.cpp";
        if $path.IO.e {
            say "solution already exists";
            return ;
        }
        spurt $path, $template;
        my $cmd = "printf '$path' | pbcopy";
        say $path;
        shell $cmd;
    } elsif $action eq "submit" {
        my $proc = shell "git status --porcelain", :out;
        my $str = $proc.out.slurp: :close;
        my $match = $str ~~ /(<-[\/]>+)\.cpp/;
        my $title = $match[0].Str.comb(/<-[\-]>+/).join(" ");
        my $cmd = "git add . && git commit -m \"add Yanzhan\'s cpp solution for the $title problem on { $judge.lc }\"";
        shell $cmd;
    } elsif $action eq "info" {
        my $proc = shell "git status --porcelain", :out;
        my $str = $proc.out.slurp: :close;
        my $match = $str ~~ /(<-[\/]>+)\.cpp/;
        my $path = "./{ $judge.lc }/c++/{ $match[0].Str }.cpp";
        my $cmd = "printf '$path' | pbcopy";
        say $path;
        shell $cmd;
    } elsif $action eq "format" {
        my $proc = shell "pbpaste", :out;
        my $str = $proc.out.slurp: :close;
        my @items = split("\n", $str).grep( *.chars > 0 );
        $str = @items.join("\n\n");
        my $path = "tmp.txt";
        spurt $path, $str;
        my $cmd = "cat { $path } | pbcopy";
        shell $cmd;
        $cmd = "rm { $path }";
        shell $cmd;
    } elsif $action eq "build" {
        my $cmd = "cd build && rm -rf * && cd ..";
        shell $cmd;
        my @sitemap-lines = ['<?xml version="1.0" encoding="UTF-8"?>
<urlset xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://www.sitemaps.org/schemas/sitemap/0.9 http://www.sitemaps.org/schemas/sitemap/0.9/sitemap.xsd" xmlns="http://www.sitemaps.org/schemas/sitemap/0.9">'];
        my @roots = [["leetcode", "leetcode/c++"], ["codesignal", "codesignal/c++"], ["codewars", "codewars/c++"], ["hackerrank", "hackerrank/c++"], ["interviewbit", "interviewbit/c++"]];
        for @roots -> @root {
            my $name = @root[0];
            my $path = @root[1];
            $cmd = "mkdir -p build/{$name}";
            shell $cmd;
            my @lines = ["<head><title>{$name} solutions</title></head><body>", "<h2>{$name} solutions by Yanzhan</h2>", "<ul>"];
            for dir($path).grep( { $_.contains(".cpp") } ) -> $file {
                my $filename = $file.substr($path.chars + 1, $file.chars - $path.chars - 4 - 1);
                @lines.push("<li><a href='/{$name}/{$filename}.html' target='_blank'>{$filename.split("-").join(" ")}</a></li>");
                @sitemap-lines.push('<url>');
                @sitemap-lines.push("<loc>https://yanzhan.site/{$name}/{$filename}.html</loc>");
                @sitemap-lines.push('</url>');
                gen-cpp($file, $filename, $name, $path);
            }
            @lines.append("</ul></body>");
            spurt "build/{$name}/index.html", @lines.join("\n");
        }
        @sitemap-lines.push('</urlset>');
        spurt "build/sitemap.xml", @sitemap-lines.join("\n");
        $cmd = "cp -r ./pre-build/* ./build";
        shell $cmd;
        $cmd = "cp -r build/* ../yangyanzhan.github.io";
        shell $cmd;
    } else {
        say "unknown action";
    }
}
