// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/reveal-cards-in-increasing-order.html .

class Solution {
  public:
    vector<int> deckRevealedIncreasing(vector<int> &deck) {
        sort(deck.begin(), deck.end());
        vector<int> res;
        for (int i = deck.size() - 1; i >= 0; i--) {
            int num = deck[i];
            if (res.size() > 0) {
                int last = res[res.size() - 1];
                res.insert(res.begin(), last);
                res.pop_back();
                res.insert(res.begin(), num);
            } else {
                res.push_back(num);
            }
        }
        return res;
    }
};
