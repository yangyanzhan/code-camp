// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/insert-a-node-into-a-sorted-doubly-linked-list.html .

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    auto new_node = new DoublyLinkedListNode(data);
    auto curr = head;
    while (curr->next && curr->next->data < data) {
        curr = curr->next;
    }
    if (!curr) {
        return new_node;
    }
    if (curr->data >= new_node->data) {
        if (curr == head) {
            new_node->next = curr;
            curr->prev = new_node;
            return new_node;
        } else {
            curr->prev->next = new_node;
            new_node->prev = curr->prev;
            new_node->next = curr;
            curr->prev = new_node;
            return head;
        }
    } else {
        if (curr->next) {
            new_node->next = curr->next;
            curr->next->prev = new_node;
        }
        new_node->prev = curr;
        curr->next = new_node;
        return head;
    }
}
