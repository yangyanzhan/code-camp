// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/populate-next-right-pointers-tree.html .

void Solution::connect(TreeLinkNode *A) {
    TreeLinkNode *now = A, *head = NULL, *tail = NULL;
    while (now) {
        if (now->left) {
            if (tail) {
                tail->next = now->left;
                tail = tail->next;
            } else {
                head = now->left;
                tail = head;
            }
        }
        if (now->right) {
            if (tail) {
                tail->next = now->right;
                tail = tail->next;
            } else {
                head = now->right;
                tail = head;
            }
        }
        now = now->next;
        if (!now) {
            now = head;
            head = NULL;
            tail = NULL;
        }
    }
}
