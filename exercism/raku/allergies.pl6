# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/mer43FCjow8

unit module Allergies;

my @allergens = <eggs peanuts shellfish strawberries tomatoes chocolate pollen cats>;

sub list-allergies($score) is export {
    @allergens.keys.grep($score +& (1 +< *)).map({ @allergens[$_] })
}

sub allergic-to($score, $allergen) is export {
    defined list-allergies($score).index($allergen)
}
