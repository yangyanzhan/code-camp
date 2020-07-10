// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/remove-k-from-list.html .

// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };

ListNode<int> *removeKFromList(ListNode<int> *l, int k) {
    using namespace std;
    ListNode<int> *head = new ListNode<int>();
    head->next = l;
    ListNode<int> *pre = head, *now = l;
    while (now != nullptr) {
        ListNode<int> *next = now->next;
        if (now->value == k) {
            delete now;
            now = next;
            pre->next = now;
        } else {
            pre = now;
            now = now->next;
        }
    }
    return head->next;
}
