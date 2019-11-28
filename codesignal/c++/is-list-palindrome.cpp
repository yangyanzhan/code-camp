// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/is-list-palindrome.html .

// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };

ListNode<int> *reverse(ListNode<int> *node) {
    ListNode<int> *head = nullptr, *curr = node;
    while (curr) {
        ListNode<int> *new_node = new ListNode<int>(curr->value);
        new_node->next = head;
        head = new_node;
        curr = curr->next;
    }
    return head;
}

bool isListPalindrome(ListNode<int> *node) {
    ListNode<int> *reversed = reverse(node);
    while (node) {
        if (node->value != reversed->value) {
            return false;
        }
        node = node->next;
        reversed = reversed->next;
    }
    return true;
}

