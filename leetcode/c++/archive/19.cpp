// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *pre = nullptr;
        ListNode *p1 = head;
        ListNode *p2 = head;
        for (int i = 0; i < n - 1; i++) {
            p2 = p2->next;
        }
        while (p2->next) {
            pre = p1;
            p1 = p1->next;
            p2 = p2->next;
        }
        if (pre) {
            pre->next = p1->next;
            return head;
        } else {
            return head->next;
        }
    }
};
