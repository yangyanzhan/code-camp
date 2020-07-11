// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/rotate-list.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::rotateRight(ListNode *A, int B) {
    if (A == NULL)
        return NULL;
    int len = 0;
    ListNode *curr = A;
    while (curr) {
        len++;
        curr = curr->next;
    }
    B %= len;
    if (B == 0)
        return A;
    ListNode *slow = A, *fast = slow;
    for (int i = 0; i < B; i++) {
        fast = fast->next;
    }
    while (fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    ListNode *head = slow->next;
    slow->next = NULL;
    curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = A;
    return head;
}
