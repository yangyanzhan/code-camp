// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/recover-a-tree-from-preorder-traversal.html .

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
  public:
    TreeNode *recoverFromPreorder(string S) {
        vector<vector<int>> tokens;
        regex reg("(-*)(\\d+)");
        for (auto it = sregex_iterator(S.begin(), S.end(), reg);
             it != sregex_iterator(); it++) {
            int count = it->str(1).size();
            int num = stoi(it->str(2));
            tokens.push_back({num, count});
        }
        return recover(tokens);
    }

    TreeNode *recover(vector<vector<int>> tokens) {
        if (tokens.size() == 0) {
            return nullptr;
        }
        int n1 = tokens[0][0];
        int c1 = tokens[0][1];
        auto head = new TreeNode(n1);
        vector<vector<int>> lefts, rights;
        int idx = 1, n = tokens.size(), count = 0;
        for (; idx < n; idx++) {
            if (tokens[idx][1] == c1 + 1) {
                count++;
            }
            if (count == 2) {
                break;
            }
            lefts.push_back(tokens[idx]);
        }
        rights.insert(rights.end(), tokens.begin() + idx, tokens.end());
        head->left = recover(lefts);
        head->right = recover(rights);
        return head;
    }
};
