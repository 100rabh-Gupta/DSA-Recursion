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
    ListNode* oddEvenList(ListNode* head) {
        if (head==nullptr||head->next==nullptr)return head;
        
        ListNode* h1=head,*pe=head->next,*po=head;
        ListNode* h2=head->next;

   
        while(pe&&pe->next!=nullptr){
            po ->next=pe->next;
           po=po->next;
            
            pe->next= po->next;
           pe=pe->next;
            

        }
        
        po->next=h2;

        
        return h1;
    }
};