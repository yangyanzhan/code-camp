// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/grasshopper-make-change.html .

class Solution {
public:
    static float money;
    static float candy;
    static float chips;
    static float soda;
    static float change;
};

float Solution::money = 10;
float Solution::candy = 1.42;
float Solution::chips = 2.40;
float Solution::soda = 1;
float Solution::change = Solution::money - Solution::candy - Solution::chips - Solution::soda;

