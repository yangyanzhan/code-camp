# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/e7nJWyPZz3c

unit module Scrabble;

sub score ($word) is export {
    [+] $word.uc.trans(
        "AEIOULNRST" => ["1 "],
        "DG" => ["2 "],
        "BCMP" => ["3 "],
        "FHVWY" => ["4 "],
        "K" => ["5 "],
        "JX" => ["8 "],
        "QZ" => ["10 "]).trim.comb(/\d+/);
}
