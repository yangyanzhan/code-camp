#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yanzhan.site"
__youtube__ = "https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber"
__twitter__ = "https://twitter.com/YangYanzhan"

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = ListNode(0)
        curr = head
        carry = 0
        while l1 is not None and l2 is not None:
            sum = l1.val + l2.val + carry
            carry = 1 if sum >= 10 else 0
            sum = sum % 10
            curr.next = ListNode(sum)
            curr = curr.next
            l1 = l1.next
            l2 = l2.next
        l = l1 if l1 is not None else l2
        while l is not None:
            sum = l.val + carry
            carry = 1 if sum >= 10 else 0
            sum = sum % 10
            curr.next = ListNode(sum)
            curr = curr.next
            l = l.next
        if carry != 0:
            curr.next = ListNode(carry)
        return head.next
