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
    ListNode* middle(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast!=NULL and fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return prev;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL|| head->next==NULL)
            return NULL;
        ListNode* prev=middle(head);
        prev->next=prev->next->next;
        return head;
    }
};