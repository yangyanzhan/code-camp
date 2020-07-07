# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/BqfxXUH2r5Q .
# It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
# Blog URL for this problem: https://yanzhan.site/rosetta/9-billion-names-of-god-the-integer.html .
# Disclaimer: this solution is quoted from Rosetta Code, for more solutions and code snippets, please visit Rosetta Code Website : http://rosettacode.org/wiki/Rosetta_Code . Thanks for the great work done by Rosetta maintainers and contributors, I could make video tutorials for Rosetta.

my @rows = [1],;
sub next-row($n) {
    my $row = [];
    for 1..$n -> $i {
        $row.push([+](@rows[$n - $i][0..^min($i, @rows[$n - $i].elems)]));
    }
    @rows.push($row);
    @rows[$n];
}
 
say "rows:";
say .fmt('%2d'), ": ", next-row($_) for 1..10;
 
