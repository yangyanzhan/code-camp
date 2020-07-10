// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/sort-integers-by-the-power-value.html .

class Solution {
    map<int, int> cache;

  public:
    int getKth(int lo, int hi, int k) {
        vector<tuple<int, int>> tuples;
        for (int num = lo; num <= hi; num++) {
            int p = power(num);
            tuples.push_back(make_tuple(p, num));
        }
        sort(tuples.begin(), tuples.end());
        return get<1>(tuples[k - 1]);
    }

    int power(int num) {
        if (cache.find(num) != cache.end()) {
            return cache[num];
        }
        if (num == 1) {
            return 0;
        }
        int next;
        if (num % 2 == 0) {
            next = num / 2;
        } else {
            next = 3 * num + 1;
        }
        int p = power(next) + 1;
        cache[num] = p;
        return p;
    }
};
