# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/j-bZSQrQwQQ
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/grains.html .

unit module Grains;

sub grains-on-square($square) is export {
    1 <= $square <= 64 or die "square must be between 1 and 64";
    2 ** ($square - 1);
}

sub total-grains() is export {
    [+] (1...64).map({ grains-on-square $_ });
}
