// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/swap-list-nodes-in-pairs.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::swapPairs(ListNode *A) {
    ListNode *head = new ListNode(0), *curr = head;
    head->next = A;
    while (curr->next && curr->next->next) {
        ListNode *n1 = curr->next;
        ListNode *n2 = n1->next;
        curr->next = n2;
        n1->next = n2->next;
        n2->next = n1;
        curr = curr->next->next;
    }
    return head->next;
}
