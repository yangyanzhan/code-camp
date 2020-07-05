# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/mer43FCjow8
# Blog URL for this problem: https://yanzhan.site/exercism/raku/allergies.html .

unit module Allergies;

my @allergens = <eggs peanuts shellfish strawberries tomatoes chocolate pollen cats>;

sub list-allergies($score) is export {
    @allergens.keys.grep($score +& (1 +< *)).map({ @allergens[$_] })
}

sub allergic-to($score, $allergen) is export {
    defined list-allergies($score).index($allergen)
}
