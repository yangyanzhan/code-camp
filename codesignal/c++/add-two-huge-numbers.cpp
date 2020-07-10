// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/add-two-huge-numbers.html .

// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };

ListNode<int> *reverse(ListNode<int> *node) {
    ListNode<int> *head = nullptr;
    while (node) {
        ListNode<int> *next = node->next;
        node->next = head;
        head = node;
        node = next;
    }
    return head;
}

ListNode<int> *addTwoHugeNumbers(ListNode<int> *a, ListNode<int> *b) {
    ListNode<int> *nums1 = reverse(a), *nums2 = reverse(b), *sum = nullptr;
    int carry = 0, base = 10000;
    while (nums1 || nums2) {
        int added = 0;
        if (nums1) {
            added += nums1->value;
            nums1 = nums1->next;
        }
        if (nums2) {
            added += nums2->value;
            nums2 = nums2->next;
        }
        added += carry;
        carry = added / base;
        added = added % base;
        ListNode<int> *node = new ListNode<int>(added);
        node->next = sum;
        sum = node;
    }
    if (carry) {
        ListNode<int> *node = new ListNode<int>(carry);
        node->next = sum;
        sum = node;
    }
    return sum;
}
