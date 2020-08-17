unit module my-config;

sub get-judge-idx() is export {
    #                  0           1            2             3           4             5            6           7              8          9
    my @judges = ["leetcode", "lintcode", "codeforces", "codesignal", "codewars", "hackerrank", "exercism", "interviewbit", "rosetta", "csacademy"];

    return 4;
}

sub get-page-ext() is export {
    # possible ext: ["", "-hidden"]
    my @exts = ["", "-hidden"];
    return @exts[0];
}
