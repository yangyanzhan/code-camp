# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/sWAmJqwD0EM

unit module TwoFer;

sub two-fer ($name?) is export {
    return "One for {$name ?? $name !! "you"}, one for me.";
}
