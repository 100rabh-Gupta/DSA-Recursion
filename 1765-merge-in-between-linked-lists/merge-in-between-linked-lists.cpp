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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       ListNode*head= list1;
        if ( a==1){

ListNode*tail=head->next;
head->next=list2;
              while( a<b){
                a++;
                tail=tail->next;
            }
          
            ListNode*lis2=list2;
            while( lis2->next){
                lis2=lis2->next;
            }
            lis2->next=tail->next;
        return head;
          
            
        }
int count=0;
ListNode*tail=head,*prev=nullptr;

while(count<a){
    prev=tail;
    tail=tail->next;
    count++;
}
prev->next=list2;
while(list2->next){
    list2=list2->next;
}
while(a<b){
    tail=tail->next;
    a++;

}

list2->next=tail->next;





return head;


        
    }
};