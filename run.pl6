sub MAIN($action, $filename, $judge = "codesignal") {
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
        my $match = $str ~~ /(<-[\/]>+)\.cpp$/;
        my $title = $match[1].Str.comb(/<-[\-]>+/).join(" ");
        my $cmd = "git add . && git commit -m \"add Yanzhan\'s cpp solution for the $title problem on { $judge.lc }\"";
        say $cmd;
    }
}
