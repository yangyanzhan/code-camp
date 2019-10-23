# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : 

unit module FlattenArray;

sub flatten-array(@input) is export {
    @input.map({ $_.isa(Array) ?? |flatten-array($_) !! $_ }).grep({ defined $_ }).Array;
}

