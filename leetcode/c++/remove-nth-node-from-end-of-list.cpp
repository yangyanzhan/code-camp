// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/remove-nth-node-from-end-of-list.html .

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *res = head;
        ListNode *p0 = nullptr, *p1 = head, *p2 = head;
        for (int i = 0; i < n; i++) {
            p2 = p2->next;
        }
        while (p2 != nullptr) {
            p0 = p1;
            p1 = p1->next;
            p2 = p2->next;
        }
        if (p0 == nullptr) {
            return res->next;
        }
        p0->next = p1->next;
        return res;
    }
};
