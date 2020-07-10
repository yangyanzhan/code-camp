// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/2sum-binary-tree.html .

int Solution::t2Sum(TreeNode *A, int B) {
    stack<TreeNode *> common, reverse;
    int val1 = 0, val2 = 0;
    bool done1 = false, done2 = false;
    TreeNode *curr1 = A, *curr2 = A;
    while (true) {
        while (!done1) {
            if (curr1) {
                common.push(curr1);
                curr1 = curr1->left;
            } else {
                if (!common.empty()) {
                    curr1 = common.top();
                    common.pop();
                    val1 = curr1->val;
                    curr1 = curr1->right;
                }
                done1 = true;
            }
        }
        while (!done2) {
            if (curr2) {
                reverse.push(curr2);
                curr2 = curr2->right;
            } else {
                if (!reverse.empty()) {
                    curr2 = reverse.top();
                    reverse.pop();
                    val2 = curr2->val;
                    curr2 = curr2->left;
                }
                done2 = true;
            }
        }
        if (val1 >= val2) {
            break;
        }
        if (val1 + val2 == B) {
            return true;
        } else if (val1 + val2 < B) {
            done1 = false;
        } else {
            done2 = false;
        }
    }
    return false;
}
