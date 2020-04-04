// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/all-possible-full-binary-trees.html .

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    map<int, vector<TreeNode *>> cache;
    bool is_power_of_2(int num) {
        while (num > 1) {
            if (num % 2 != 0) {
                return false;
            }
            num /= 2;
        }
        return true;
    }
public:
    vector<TreeNode *> allPossibleFBT(int N) {
        if (cache.find(N) != cache.end()) {
            return cache[N];
        }
        vector<TreeNode *> res;
        if (N == 1) {
            auto head = new TreeNode(0);
            res.push_back(head);
        } else if (N == 0 || N == 2) {
        } else if (N == 3) {
            auto head = new TreeNode(0);
            head->left = new TreeNode(0);
            head->right = new TreeNode(0);
            res.push_back(head);
        } else {
            for (int c = 1; c <= N - 2; c++) {
                auto lefts = allPossibleFBT(c);
                auto rights = allPossibleFBT(N - 1 - c);
                for (auto &left: lefts) {
                    for (auto &right: rights) {
                        auto head = new TreeNode(0);
                        head->left = left;
                        head->right = right;
                        res.push_back(head);
                    }
                }
            }
        }
        cache[N] = res;
        return res;
    }
};

