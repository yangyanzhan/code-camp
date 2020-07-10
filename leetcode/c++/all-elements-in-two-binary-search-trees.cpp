// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/all-elements-in-two-binary-search-trees.html .

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
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2) {
        auto nums1 = getAllElements(root1);
        auto nums2 = getAllElements(root2);
        vector<int> res;
        int i = 0, j = 0, m = nums1.size(), n = nums2.size();
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                res.push_back(nums1[i]);
                i++;
            } else {
                res.push_back(nums2[j]);
                j++;
            }
        }
        while (i < m) {
            res.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            res.push_back(nums2[j]);
            j++;
        }
        return res;
    }

    vector<int> getAllElements(TreeNode *root) {
        if (root == nullptr) {
            return vector<int>();
        }
        auto lefts = getAllElements(root->left);
        auto rights = getAllElements(root->right);
        lefts.push_back(root->val);
        lefts.insert(lefts.end(), rights.begin(), rights.end());
        return lefts;
    }
};
