# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=None
        NextNode=None
        while head!=None:
            NextNode=head.next
            head.next=temp
            temp=head
            head=NextNode
        return temp
            
