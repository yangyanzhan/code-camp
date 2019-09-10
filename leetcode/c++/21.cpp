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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
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
