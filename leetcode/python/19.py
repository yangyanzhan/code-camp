#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        p1 = head
        p2 = head
        for i in range(n - 1):
            p2 = p2.next
        pre = None
        while p2.next is not None:
            pre = p1
            p1 = p1.next
            p2 = p2.next
        if pre is not None:
            pre.next = p1.next
            return head
        else:
            return head.next
