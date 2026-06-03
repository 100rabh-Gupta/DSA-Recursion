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

ListNode* reverse(ListNode* curr,ListNode* prev){
    if ( curr==nullptr)return prev;
    ListNode* fur=curr->next;
    curr->next=prev;
    return reverse(fur,curr);
}
    ListNode* removeNodes(ListNode* head) {
ListNode*temp=head;



ListNode*head1=reverse(temp,nullptr);
temp=head1;





            
       
    int maxi=INT_MIN;
        ListNode* newhead=new ListNode(0) ;
         ListNode* tail=newhead;
         int ;

         while( temp){
             ListNode* nxt = temp->next;

            if ( temp->val>=maxi){
                 maxi = temp->val;
                tail->next=temp;
                tail=tail->next;
                tail->next=nullptr;
              

            }
            temp=nxt;
        

         }

       ListNode*man=reverse( newhead->next,nullptr);
       return man;

        
    }
};