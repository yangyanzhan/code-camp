// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/kth-smallest-element-in-tree.html .

struct Node {
    int val;
    int counts;
    Node *left;
    Node *right;
    Node(int x): val(x), counts(0), left(NULL), right(NULL) {}
};

Node *build(TreeNode *root) {
    if (!root) {
        return NULL;
    }
    Node *node = new Node(root->val);
    node->left = build(root->left);
    node->right = build(root->right);
    return node;
}

void getCounts(Node *root, int &counts) {
    if (!root) {
        return ;
    }
    getCounts(root->left, counts);
    root->counts = ++counts;
    getCounts(root->right, counts);
}

int find(Node *root, int k) {
    if (root->counts == k) {
        return root->val;
    } else if (root->counts < k) {
        return find(root->right, k);
    } else {
        return find(root->left, k);
    }
}

int Solution::kthsmallest(TreeNode* root, int k) {
    Node *node = build(root);
    int counts = 0;
    getCounts(node, counts);
    return find(node, k);
}
