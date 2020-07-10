// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/merge-two-linked-lists.html .

// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };

ListNode<int> *mergeTwoLinkedLists(ListNode<int> *l1, ListNode<int> *l2) {
    using namespace std;
    ListNode<int> *head = new ListNode<int>(), *curr = head;
    while (l1 && l2) {
        if (l1->value < l2->value) {
            curr->next = l1;
            curr = curr->next;
            l1 = l1->next;
        } else {
            curr->next = l2;
            curr = curr->next;
            l2 = l2->next;
        }
    }
    while (l1) {
        curr->next = l1;
        curr = curr->next;
        l1 = l1->next;
    }
    while (l2) {
        curr->next = l2;
        curr = curr->next;
        l2 = l2->next;
    }
    ListNode<int> *tmp = head;
    head = head->next;
    delete tmp;
    return head;
}
