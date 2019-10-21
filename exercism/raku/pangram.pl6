# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/e3fSzK8xtt8

unit module Pangram;

sub is-pangram ($string) is export {
    return $string.lc.comb.grep(/<[a..z]>/).unique.elems == 26;
}
