# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : 

unit module Luhn;

sub is-luhn-valid ($input is copy) is export {
    $input ~~ s:g/\s//;
    return False if $input ~~ /\D/ || $input.chars <= 1;
    my $sum = [+] $input.comb.reverse.kv.map({
        my $num = ($^a %% 2 ?? 1 !! 2) * $^b;
        $num -= 9 if $num > 9;
        $num;
    });
    $sum %% 10;
}
