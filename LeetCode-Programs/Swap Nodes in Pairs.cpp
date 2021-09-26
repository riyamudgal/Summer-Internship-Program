/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *temp=head;
        ListNode *temp1=head->next;
        
        while(temp!=NULL && temp1!=NULL)
        {
            swap(temp->val,temp1->val);
            if(temp1->next!=NULL && temp1->next->next!=NULL)
            {
                temp=temp1->next;
                temp1=temp1->next->next;
            }
            else
                break;
        }
        return head;
    }
};
