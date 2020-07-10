// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/sort-array-by-parity.html .

class Solution {
  public:
    vector<int> sortArrayByParity(vector<int> &A) {
        vector<int> evens, odds;
        for (auto num : A) {
            if (num % 2 == 0) {
                evens.push_back(num);
            } else {
                odds.push_back(num);
            }
        }
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());
        evens.insert(evens.end(), odds.begin(), odds.end());
        return evens;
    }
};
