// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/remove-nth-node-from-list-end.html .

ListNode *Solution::removeNthFromEnd(ListNode *A, int B) {
    if (A == NULL)
        return NULL;
    ListNode *slow = A, *fast = A;
    for (int i = 0; i < B; i++) {
        if (fast->next) {
            fast = fast->next;
        } else {
            return A->next;
        }
    }
    while (fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return A;
}
