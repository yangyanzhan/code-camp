# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/iDas3lZamz4
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/flatten-array.html .

unit module FlattenArray;

sub flatten-array(@input) is export {
    @input.map({ $_.isa(Array) ?? |flatten-array($_) !! $_ }).grep({ defined $_ }).Array;
}

