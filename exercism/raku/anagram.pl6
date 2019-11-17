# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/_R6kCJMIoL8
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/anagram.html .

unit module Anagram;

sub match-anagrams (:$subject!, :@candidates!) is export {
    @candidates.grep({ $_.lc.comb.sort eq $subject.lc.comb.sort && $_.lc !eq $subject.lc });
}
