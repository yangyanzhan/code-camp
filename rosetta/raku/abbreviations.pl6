# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video :  .
# It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
# Disclaimer: this solution is quoted from Rosetta Code, for more solutions and code snippets, please visit Rosetta Code Website : http://rosettacode.org/wiki/Rosetta_Code . Thanks for the great work done by Rosetta maintainers and contributors, I could make video tutorials for Rosetta.

sub auto-abbreviate ( Str $string ) {
    return Nil unless my @words = $string.words;
    return $_ if @words».substr(0, $_).Set == @words for 1 .. @words».chars.max;
    return '∞';
}
 
# Testing
 say ++$, ') ', .&auto-abbreviate, '  ', $_ for './DoWAKA.txt'.IO.lines;
