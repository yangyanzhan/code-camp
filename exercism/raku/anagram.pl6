# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : 

unit module Anagram;

sub match-anagrams (:$subject!, :@candidates!) is export {
    @candidates.grep({ $_.lc.comb.sort eq $subject.lc.comb.sort && $_.lc !eq $subject.lc });
}
