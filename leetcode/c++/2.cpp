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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *curr = head;
        int carry = 0;
        while (l1 && l2) {
            int sum = l1->val + l2->val + carry;
            carry = sum / 10;
            sum %= 10;
            curr->next = new ListNode(sum);
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        ListNode *l = l1 ? l1 : l2;
        while (l) {
            int sum = l->val + carry;
            carry = sum / 10;
            sum %= 10;
            curr->next = new ListNode(sum);
            curr = curr->next;
            l = l->next;
        }
        if (carry) {
            curr->next = new ListNode(carry);
        }
        return head->next;
    }
};
