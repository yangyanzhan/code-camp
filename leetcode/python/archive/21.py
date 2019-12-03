#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"
__youtube__ = "https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber"
__twitter__ = "https://twitter.com/YangYanzhan"

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = None
        curr = None
        while l1 is not None and l2 is not None:
            p = None
            if l1.val < l2.val:
                p = l1
                l1 = l1.next
            else:
                p = l2
                l2 = l2.next
            if head is None:
                head = p
                curr = p
            else:
                curr.next = p
                curr = p
        while l1 is not None:
            p = l1
            if head is None:
                head = p
                curr = p
            else:
                curr.next = p
                curr = p
            l1 = l1.next
        while l2 is not None:
            p = l2
            if head is None:
                head = p
                curr = p
            else:
                curr.next = p
                curr = p
            l2 = l2.next
        return head
