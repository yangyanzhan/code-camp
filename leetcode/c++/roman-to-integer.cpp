// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/roman-to-integer.html .

class Solution {
public:
    int romanToInt(string s) {
        using namespace std;
        vector<string> names = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        int idx = 0;
        int res = 0;
        while (s.size() > 0) {
            auto name = names[idx];
            auto value = values[idx];
            while (s.size() >= name.size() && s.substr(0, name.size()) == name) {
                s = s.substr(name.size());
                res += value;
            }
            idx++;
        }
        return res;
    }
};

