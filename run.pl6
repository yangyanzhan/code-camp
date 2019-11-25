sub MAIN($action, $filename = "", $judge = "codesignal") {
    if $action eq "fetch" {
        if $filename eq "" {
            say "error";
            return ;
        }

        my $template = "tools/cpp-template.cpp".IO.slurp;

        $template ~~ s:g/\{\{judge\}\}/$judge/;
        $template ~~ s:g/\{\{filename\}\}/$filename/;

        spurt "./$judge/c++/$filename.cpp", $template;
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
        my $path = "{ $judge.lc }/c++/{ $match[0].Str }.cpp";
        my $cmd = "printf '$path' | pbcopy";
        say $path;
        shell $cmd;
    }
}
