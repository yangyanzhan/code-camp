# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/LKSMZIB8hhw
# It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
# Blog URL for this problem: https://yanzhan.site/rosetta/100-doors.html .
# Disclaimer: this solution is quoted from Rosetta Code, for more solutions and code snippets, please visit Rosetta Code Website : http://rosettacode.org/wiki/Rosetta_Code . Thanks for the great work done by Rosetta maintainers and contributors, I could make video tutorials for Rosetta.

sub solution1() {
    my @doors = False xx 101;

    (.=not for @doors[0, $_ ... 100]) for 1..100;
    
    say "Door $_ is ", <closed open>[ @doors[$_] ] for 1..100;
}

sub solution2() {
    say "Door $_ is open" for map {$^n ** 2}, 1..10;
}

sub solution3() {
    say "Door $_ is ", <closed open>[.sqrt == .sqrt.floor] for 1..100;
}

solution1;
solution2;
solution3;
