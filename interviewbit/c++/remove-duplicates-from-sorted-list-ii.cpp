// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/remove-duplicates-from-sorted-list-ii.html .

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::deleteDuplicates(ListNode *A) {
    if (A == NULL)
        return NULL;
    ListNode *curr = A->next;
    int val = A->val;
    bool found = false;
    while (curr) {
        if (curr->val != val) {
            break;
        } else {
            found = true;
        }
        curr = curr->next;
    }
    if (found) {
        return deleteDuplicates(curr);
    }
    ListNode *node = new ListNode(val);
    node->next = deleteDuplicates(curr);
    return node;
}
