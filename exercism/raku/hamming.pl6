# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/Zj5kfResdns
# Blog URL for this problem: https://yanzhan.site/exercism/raku/hamming.html .

unit module Hamming;

sub hamming-distance ($strand1, $strand2) is export {
    die "left and right strands must be of equal length" if $strand1.chars != $strand2.chars;
    return (0..^$strand1.chars).grep({ $strand1.comb[$_] !eq $strand2.comb[$_] }).elems;
}
