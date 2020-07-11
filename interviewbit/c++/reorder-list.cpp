// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/reorder-list.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode *reverse(ListNode *&head) {
    ListNode *preHead = new ListNode(0);
    preHead->next = head;
    while (head->next) {
        ListNode *next = head->next;
        head->next = next->next;
        next->next = preHead->next;
        preHead->next = next;
    }
    return preHead->next;
}

ListNode *Solution::reorderList(ListNode *A) {
    if (A == NULL)
        return A;
    ListNode *slow = A, *fast = A;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (slow == fast || !slow->next)
        return A;
    ListNode *ns1 = A, *ns2 = reverse(slow->next);
    slow->next = NULL;
    ListNode *head = new ListNode(0), *curr = head;
    while (ns1 && ns2) {
        curr->next = ns1;
        ns1 = ns1->next;
        curr = curr->next;
        curr->next = ns2;
        ns2 = ns2->next;
        curr = curr->next;
    }
    if (ns1)
        curr->next = ns1;
    if (ns2)
        curr->next = ns2;
    return head->next;
}
