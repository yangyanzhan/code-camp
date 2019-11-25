sub MAIN($action, $filename, $judge = "codesignal") {
    if $action eq "fetch" {
        my $template = "tools/cpp-template.cpp".IO.slurp;

        $template ~~ s:g/\{\{judge\}\}/$judge/;
        $template ~~ s:g/\{\{filename\}\}/$filename/;

        spurt "./$judge/c++/$filename.cpp", $template;
    } elsif $action eq "submit" {
        my $title = $filename.comb(/<-[\-]>+/).join(" ");
        my $cmd = "git add . && git commit -m \"add Yanzhan\'s cpp solution for the $title problem on $judge\"";
        say $cmd;
    }
}
