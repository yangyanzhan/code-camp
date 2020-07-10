// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/trees-is-this-a-binary-search-tree.html .

bool checkBST(Node *root, int min, int max) {
    if (!root)
        return true;
    if (!(min < root->data && root->data < max)) {
        return false;
    }
    return checkBST(root->left, min, root->data) &&
           checkBST(root->right, root->data, max);
}

bool checkBST(Node *root) { return checkBST(root, -1, 10001); }
