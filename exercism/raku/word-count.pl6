# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/iDas3lZamz4

unit module WordCount;

sub count-words ($sentence) is export {
    my %counts;
    for $sentence.lc.comb(/\w+[\'\w+]?/) -> $word {
        %counts{$word}++;
    }
    return %counts;
}
