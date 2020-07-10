// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/copy-list.html .

/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode *Solution::copyRandomList(RandomListNode *A) {
    RandomListNode *head = new RandomListNode(0), *curr = A, *pre = head;
    map<RandomListNode *, RandomListNode *> mapping;
    while (curr) {
        RandomListNode *node = new RandomListNode(curr->label);
        mapping[curr] = node;
        pre->next = node;
        pre = pre->next;
        curr = curr->next;
    }
    RandomListNode *now = head->next;
    curr = A;
    while (curr) {
        now->random = mapping[curr->random];
        now = now->next;
        curr = curr->next;
    }
    return head->next;
}
