// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/merge-k-sorted-lists.html .

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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        if (lists.size() == 0) {
            return nullptr;
        }
        if (lists.size() == 1) {
            return lists[0];
        }
        if (lists.size() == 2) {
            return merge2Lists(lists[0], lists[1]);
        }
        vector<ListNode *> lists1, lists2;
        for (int i = 0; i < lists.size() / 2; i++) {
            lists1.push_back(lists[i]);
        }
        for (int i = lists.size() / 2; i < lists.size(); i++) {
            lists2.push_back(lists[i]);
        }
        auto res1 = mergeKLists(lists1);
        auto res2 = mergeKLists(lists2);
        return merge2Lists(res1, res2);
    }

    ListNode *merge2Lists(ListNode *h1, ListNode *h2) {
        ListNode *head = new ListNode(), *curr = head;
        while (h1 && h2) {
            if (h1->val <= h2->val) {
                curr->next = h1;
                curr = curr->next;
                h1 = h1->next;
            } else {
                curr->next = h2;
                curr = curr->next;
                h2 = h2->next;
            }
        }
        if (h1) {
            curr->next = h1;
        }
        if (h2) {
            curr->next = h2;
        }
        return head->next;
    }
};
