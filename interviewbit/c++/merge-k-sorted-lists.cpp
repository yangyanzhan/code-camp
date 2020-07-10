// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/merge-k-sorted-lists.html .

ListNode *merge2Lists(ListNode *head1, ListNode *head2) {
    ListNode *head = new ListNode(0), *curr = head;
    while (head1 && head2) {
        int v1 = head1->val, v2 = head2->val;
        if (v1 <= v2) {
            curr->next = new ListNode(v1);
            head1 = head1->next;
        } else {
            curr->next = new ListNode(v2);
            head2 = head2->next;
        }
        curr = curr->next;
    }
    ListNode *head3 = head1 ? head1 : head2;
    while (head3) {
        curr->next = new ListNode(head3->val);
        head3 = head3->next;
        curr = curr->next;
    }
    return head->next;
}

ListNode *Solution::mergeKLists(vector<ListNode *> &A) {
    int n = A.size();
    if (n <= 0) {
        return NULL;
    }
    while (n > 1) {
        int begin = 0, end = n - 1;
        while (begin < end) {
            A[begin] = merge2Lists(A[begin], A[end]);
            begin++;
            end--;
        }
        n = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);
    }
    return A[0];
}
