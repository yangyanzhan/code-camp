// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/rearrange-lastn.html .

// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };

ListNode<int> *rearrangeLastN(ListNode<int> *l, int n) {
    ListNode<int> *pre = nullptr, *head = l, *tail = l;
    if (!l || n <= 0) {
        return l;
    }
    for (int i = 1; i < n; i++) {
        tail = tail->next;
    }
    while (tail->next) {
        pre = head;
        head = head->next;
        tail = tail->next;
    }
    if (!pre) {
        return l;
    }
    pre->next = nullptr;
    tail->next = l;
    return head;
}

