// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/sort-integers-by-the-number-of-1-bits.html .

class Solution {
    map<int, int> cache;
    int value(int n) {
        if (cache.find(n) == cache.end()) {
            int n1 = n, res = 0;
            while (n1 > 0) {
                res += n1 % 2;
                n1 /= 2;
            }
            cache[n] = res;
        }
        return cache[n];
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [this] (int n1, int n2) {
            int v1 = value(n1), v2 = value(n2);
            if (v1 != v2) {
                return v1 < v2;
            }
            return n1 < n2;
        });
        return arr;
    }
};

