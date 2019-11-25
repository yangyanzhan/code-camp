sub MAIN($filename, $judge = "codesignal") {
    my $template = "tools/cpp-template.cpp".IO.slurp;

    $template ~~ s:g/\{\{judge\}\}/$judge/;
    $template ~~ s:g/\{\{filename\}\}/$filename/;

    spurt "./$judge/c++/$filename.cpp", $template;
}
