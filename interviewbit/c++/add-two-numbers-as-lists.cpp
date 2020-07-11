// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/add-two-numbers-as-lists.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::addTwoNumbers(ListNode *A, ListNode *B) {
    ListNode *head = new ListNode(0), *curr = head, *nonZero = NULL;
    int carry = 0;
    while (A && B) {
        int a = A->val, b = B->val, sum = a + b + carry;
        carry = sum / 10;
        sum = sum % 10;
        A = A->next, B = B->next;
        curr->next = new ListNode(sum);
        curr = curr->next;
        if (sum != 0) {
            nonZero = curr;
        }
    }
    ListNode *remains = (A != NULL) ? A : B;
    while (remains) {
        int sum = remains->val + carry;
        carry = sum / 10;
        sum = sum % 10;
        remains = remains->next;
        curr->next = new ListNode(sum);
        curr = curr->next;
        if (sum != 0) {
            nonZero = curr;
        }
    }
    if (carry) {
        curr->next = new ListNode(carry);
        nonZero = curr->next;
    }
    if (nonZero == NULL) {
        return new ListNode(0);
    }
    nonZero->next = NULL;
    return head->next;
}
