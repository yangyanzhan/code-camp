# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/LDkDgkafAGQ

unit module Leap;

sub is-leap-year ($year) is export {
    return ($year %% 400) || (!($year %% 100) && ($year %% 4));
}
