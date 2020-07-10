// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/partition-labels.html .

class Solution {
  public:
    vector<int> partitionLabels(string S) {
        vector<int> res;
        do {
            auto head = extract(S);
            res.push_back(head);
            S = S.substr(head);
        } while (S.size() > 0);
        return res;
    }

    int extract(string s) {
        set<char> cache;
        int n = s.size();
        int i = 0, end = 0;
        while (i <= end) {
            auto now = s[i];
            if (cache.find(now) == cache.end()) {
                int j;
                for (j = n - 1; j >= i; j--) {
                    if (s[j] == s[i]) {
                        break;
                    }
                }
                end = max(end, j);
                cache.insert(now);
            }
            i++;
        }
        return end + 1;
    }
};
