// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/last-stone-weight.html .

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(), stones.end());
        while (stones.size() > 1) {
            int x = stones[0];
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            int y = stones[0];
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            if (x != y) {
                stones.push_back(x - y);
                push_heap(stones.begin(), stones.end());
            }
        }
        if (stones.size() == 0) {
            return 0;
        }
        return stones[0];
    }
};

