// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/reverse-nodes-in-k-group.html .

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
    ListNode *reverseKGroup(ListNode *head, int k) {
        if (k <= 1) {
            return head;
        }
        ListNode *fakeHead = new ListNode();
        fakeHead->next = head;
        ListNode *h = fakeHead;
        while (true) {
            ListNode *end = h;
            bool enough = true;
            for (int i = 1; i <= k; i++) {
                if (end->next == nullptr) {
                    enough = false;
                    break;
                }
                end = end->next;
            }
            if (!enough) {
                break;
            }
            ListNode *start = h->next;
            reverse(h, start, end);
            h = start;
        }
        return fakeHead->next;
    }

    void reverse(ListNode *head, ListNode *start, ListNode *end) {
        if (start->next == end) {
            head->next = end;
            start->next = end->next;
            end->next = start;
            return;
        }
        auto startNext = start->next;
        reverse(start, startNext, end);
        head->next = end;
        start->next = startNext->next;
        startNext->next = start;
    }
};
