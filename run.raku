# These are online judge websites we want to use:
# ---
# "leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit"
# Now I'm focused on leetcode!

#                  0           1            2             3           4             5            6            7
my @judges = ["leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit"];

use lib '.';
use my-config;
use Text::Markdown;

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
    } else {
        say "unknown action";
    }
}
