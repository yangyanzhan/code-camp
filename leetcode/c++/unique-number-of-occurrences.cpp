// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/unique-number-of-occurrences.html .

class Solution {
public:
    bool uniqueOccurrences(vector<int> &arr) {
        map<int, int> cache;
        for (auto num: arr) {
            if (cache.find(num) == cache.end()) {
                cache[num] = 0;
            }
            cache[num]++;
        }
        set<int> counts;
        for (auto pair: cache) {
            counts.insert(pair.second);
        }
        return counts.size() == cache.size();
    }
};

