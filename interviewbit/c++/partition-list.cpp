// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/partition-list.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::partition(ListNode *A, int B) {
    if (A == NULL)
        return NULL;
    ListNode *h1 = new ListNode(0), *h2 = new ListNode(0);
    ListNode *curr1 = h1, *curr2 = h2;
    while (A) {
        if (A->val < B) {
            curr1->next = A;
            curr1 = curr1->next;
        } else {
            curr2->next = A;
            curr2 = curr2->next;
        }
        A = A->next;
    }
    curr2->next = NULL;
    curr1->next = h2->next;
    return h1->next;
}
