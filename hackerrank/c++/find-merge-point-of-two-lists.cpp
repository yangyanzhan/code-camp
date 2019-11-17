// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/find-merge-point-of-two-lists.html .

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    auto curr1 = head1, curr2 = head2;
    while (curr1 != curr2) {
        if (curr1->next) {
            curr1 = curr1->next;
        } else {
            curr1 = head2;
        }
        if (curr2->next) {
            curr2 = curr2->next;
        } else {
            curr2 = head1;
        }
    }
    return curr1;
}
