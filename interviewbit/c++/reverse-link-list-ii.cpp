// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/reverse-link-list-ii.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::reverseBetween(ListNode *A, int m, int n) {
    if (A == NULL || m == n)
        return A;
    ListNode *head = new ListNode(0), *pre = head, *now;
    head->next = A;
    n -= m;
    while (--m) {
        pre = pre->next;
    }
    now = pre->next;
    while (n--) {
        ListNode *next = now->next;
        now->next = next->next;
        next->next = pre->next;
        pre->next = next;
    }
    return head->next;
}
