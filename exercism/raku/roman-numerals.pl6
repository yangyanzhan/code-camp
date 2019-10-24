# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : 

unit module RomanNumerals;

sub to-roman ($number is copy) is export {
    my $roman = "";
    my @digits = ("M", 1000), ("CM", 900), ("D", 500), ("CD", 400), ("C", 100), ("XC", 90), ("L", 50), ("XL", 40), ("X", 10), ("IX", 9), ("V", 5), ("IV", 4), ("I", 1);
    for @digits -> @pair {
        $roman ~= @pair[0] x ($number div @pair[1]);
        $number %= @pair[1];
    }
    return $roman;
}
