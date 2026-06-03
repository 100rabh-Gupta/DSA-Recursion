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



vector<int >store;
int maxi=INT_MIN;
        while(temp){
            maxi=max(maxi,temp->val);
            store.push_back(maxi);
        
temp=temp->next;

            
        }
        for ( int i=0;i<store.size();i++){
            cout<<store[i];
        }
        temp=head1;
        ListNode* newhead=new ListNode(0) ;
         ListNode* tail=newhead;
         int i=0;

         while( temp&& i<store.size()){
             ListNode* nxt = temp->next;
            if ( store[i]==temp->val){
                tail->next=temp;
                tail=tail->next;
                tail->next=nullptr;
              

            }
            temp=nxt;
            i++;

         }

       ListNode*man=reverse( newhead->next,nullptr);
       return man;

        
    }
};