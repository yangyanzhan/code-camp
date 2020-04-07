// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/relative-sort-array.html .

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        set<int> cache2;
        for (auto num: arr2) {
            cache2.insert(num);
        }
        vector<int> res1;
        vector<int> res2;
        map<int, int> cache1;
        for (auto num: arr1) {
            if (cache2.find(num) == cache2.end()) {
                res2.push_back(num);
            } else {
                if (cache1.find(num) == cache1.end()) {
                    cache1[num] = 0;
                }
                cache1[num]++;
            }
        }
        for (auto num: arr2) {
            for (int i = 0; i < cache1[num]; i++) {
                res1.push_back(num);
            }
        }
        sort(res2.begin(), res2.end());
        res1.insert(res1.end(), res2.begin(), res2.end());
        return res1;
    }
};

