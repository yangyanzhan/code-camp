# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/e7nJWyPZz3c

unit module Luhn;

sub is-luhn-valid ($input is copy) is export {
    $input ~~ s:g/\s//;
    return False if $input.chars <= 1 || $input ~~ /\D/;
    $input.comb.reverse.kv.map({$^a %% 2 ?? $^b !! 2 * $^b}).map({$^a > 9 ?? $^a - 9 !! $^a}).reduce({$^a + $^b}) %% 10;
}
