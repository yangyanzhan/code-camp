// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/reverse-nodes-in-kgroups.html .

// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };

ListNode<int> * reverseNodesInKGroups(ListNode<int> *l, int k) {
    ListNode<int> *head = nullptr, *tail = nullptr, *curr = l;
    while (true) {
        if (!curr) {
            break;
        }
        ListNode<int> *g_head = curr, *g_tail = curr;
        curr = curr->next;
        ListNode<int> *tmp = curr;
        bool not_enough = false;
        for (int i = 1; i < k; i++) {
            if (!tmp) {
                not_enough = true;
                break;
            }
            tmp = tmp->next;
        }
        if (not_enough) {
        } else {
            for (int i = 1; i < k; i++) {
                if (!curr) {
                    break;
                }
                ListNode<int> *tmp = curr;
                curr = curr->next;
                tmp->next = g_head;
                g_head = tmp;
            }
            g_tail->next = nullptr;
        }
        if (!head) {
            head = g_head;
            tail = g_tail;
        } else {
            tail->next = g_head;
            tail = g_tail;
        }
        if (not_enough) {
            break;
        }
    }
    return head;
}

