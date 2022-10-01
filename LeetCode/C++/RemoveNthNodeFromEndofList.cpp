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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        //if list is empty
        //if list contains 1 element
        if(head->next==NULL)
            return head->next;
        
        //calculating size;
        ListNode *temp=head;
        int count = 0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count-n<=0)
            return head->next;
        
        ListNode *prev = head;
        int ct =(count-n-1);
        while(ct>0)
        {
            prev=prev->next;
            
            ct--;
        }
        prev->next = prev->next->next;
        //rest all
        return head;
    }
};