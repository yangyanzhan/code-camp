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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *head = nullptr, *curr = nullptr;
        while (l1 && l2) {
            ListNode *p;
            if (l1->val < l2->val) {
                p = l1;
                l1 = l1->next;
            } else {
                p = l2;
                l2 = l2->next;
            }
            if (head) {
                curr->next = p;
                curr = p;
            } else {
                head = p;
                curr = p;
            }
        }
        while (l1) {
            ListNode *p = l1;
            l1 = l1->next;
            if (head) {
                curr->next = p;
                curr = p;
            } else {
                head = p;
                curr = p;
            }
        }
        while (l2) {
            ListNode *p = l2;
            l2 = l2->next;
            if (head) {
                curr->next = p;
                curr = p;
            } else {
                head = p;
                curr = p;
            }
        }
        return head;
    }
};
