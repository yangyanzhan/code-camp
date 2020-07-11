// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/merge-two-sorted-lists.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::mergeTwoLists(ListNode *A, ListNode *B) {
    ListNode *head = new ListNode(0), *curr = head;
    while (A && B) {
        int a = A->val, b = B->val;
        if (a <= b) {
            curr->next = A;
            A = A->next;
        } else {
            curr->next = B;
            B = B->next;
        }
        curr = curr->next;
    }
    if (A) {
        curr->next = A;
    }
    if (B) {
        curr->next = B;
    }
    return head->next;
}
