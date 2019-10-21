# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/Zj5kfResdns

unit module Hamming;

sub hamming-distance ($strand1, $strand2) is export {
    die "left and right strands must be of equal length" if $strand1.chars != $strand2.chars;
    return (0..^$strand1.chars).grep({ $strand1.comb[$_] !eq $strand2.comb[$_] }).elems;
}
