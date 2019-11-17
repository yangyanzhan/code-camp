# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/sWAmJqwD0EM
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/two-fer.html .

unit module TwoFer;

sub two-fer ($name?) is export {
    return "One for {$name ?? $name !! "you"}, one for me.";
}
