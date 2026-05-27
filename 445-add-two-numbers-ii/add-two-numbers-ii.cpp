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

 ListNode* reverse( ListNode* curr, ListNode* prev){
    if(curr==nullptr){
         return prev;
    }
     ListNode* front=curr->next;
      curr->next=prev;
      return reverse(front,curr);
 }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
         ListNode* h1=reverse(l1,nullptr);
          ListNode* h2=reverse(l2,nullptr);
int carry=0;
ListNode*head=new ListNode(0);
 ListNode* tail=head;
          while(h1&&h2){
            int sum=h1->val+h2->val+carry;
            tail->next= new ListNode(sum%10);
            carry=sum/10;
            h1=h1->next;
            h2=h2->next;
            tail=tail->next;


            
          }
           while(h1){
            int sum=h1->val+carry;
            tail->next= new ListNode(sum%10);
               carry=sum/10;
                h1=h1->next;
                  tail=tail->next;


           }
            while(h2){
            int sum=h2->val+carry;
            tail->next= new ListNode(sum%10);
               carry=sum/10;
                h2=h2->next;
                  tail=tail->next;


           }
           while(carry){
             tail->next= new ListNode(carry%10);
             carry/=10;
           tail=  tail->next;

           }
           
 tail=reverse(head->next,nullptr);
return tail;

    }
};