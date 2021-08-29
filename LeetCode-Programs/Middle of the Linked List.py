# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        md= [head]
        while md[-1].next:
            md.append(md[-1].next)
            #md=md.next
        return md[len(md)//2]
    
    
    
#second
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        self.md=[]
        while head:
            self.md.append(head)
            head=head.next
        return self.md[len(self.md)//2]
       
