class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode *temp=NULL, *nextNode = NULL;
        while(head!=NULL)
        {
            nextNode=head->next;
            head->next=temp;
            temp=head;
            head=nextNode;
        }
        return temp;
    }
};
