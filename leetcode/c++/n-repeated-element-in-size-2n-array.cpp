// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/n-repeated-element-in-size-2n-array.html .

class Solution {
  public:
    int repeatedNTimes(vector<int> &A) {
        map<int, int> cache;
        for (auto num : A) {
            if (cache.find(num) == cache.end()) {
                cache[num] = 0;
            }
            cache[num]++;
            if (cache[num] >= 2) {
                return num;
            }
        }
        return -1;
    }
};
