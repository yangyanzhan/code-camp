// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/palindrome-list.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode *A) {
    stack<ListNode *> nodes;
    ListNode *head = A;
    while (head) {
        nodes.push(head);
        head = head->next;
    }
    head = A;
    while (!nodes.empty()) {
        ListNode *node = nodes.top();
        nodes.pop();
        if (head->val != node->val) {
            return 0;
        }
        head = head->next;
    }
    return 1;
}
