// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    auto curr = head;
    while (curr->next) {
        auto next = curr->next;
        auto nnext = next->next;
        next->next = head;
        head->prev = next;
        head = next;
        curr->next = nnext;
        if (nnext) {
            nnext->prev = curr;
        }
    }
    return head;
}
