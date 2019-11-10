# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/e3fSzK8xtt8

unit module Raindrops;

sub raindrop ($num) is export {
    my $res = "";
    $res ~= "Pling" if $num %% 3;
    $res ~= "Plang" if $num %% 5;
    $res ~= "Plong" if $num %% 7;
    return $res.chars > 0 ?? $res !! $num.Str;
}
