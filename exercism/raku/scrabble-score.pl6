# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : 

unit module Scrabble;

sub score ($word) is export {
    my %chars-scores = "AEIOULNRST", 1, "DG", 2, "BCMP", 3, "FHVWY", 4, "K", 5, "JX", 8, "QZ", 10;
    my $res = 0;
    for $word.uc.comb -> $char {
        for %chars-scores.kv -> $chars, $score {
            if defined $chars.index($char) {
                $res += $score;
                last;
            }
        }
    }
    return $res;
}
