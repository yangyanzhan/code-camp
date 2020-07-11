// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/insertion-sort-list.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::insertionSortList(ListNode *A) {
    ListNode *head = new ListNode(0);
    while (A) {
        ListNode *node = A, *pre = head, *curr = head->next;
        A = A->next;
        while (curr) {
            if (curr->val >= node->val) {
                break;
            }
            pre = pre->next;
            curr = curr->next;
        }
        node->next = pre->next;
        pre->next = node;
    }
    return head->next;
}
