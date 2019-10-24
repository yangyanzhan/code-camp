# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/j-bZSQrQwQQ

unit module Accumulate;

sub accumulate(@items, &sub) is export {
    @items.map({ &sub($_) }).Array;
}
