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
     ListNode * reverse(ListNode* curr,ListNode* prev){
    if(curr==NULL){
    return prev;}
    ListNode* front=curr->next;
    curr->next=prev;
    return reverse(front,curr);
}

    bool isPalindrome(ListNode* head) {
        if (head->next==NULL)return 1;

        ListNode*temp=head;
      int count=0;
        while(temp){
          count++;
           temp=temp->next;

        }
     count/=2;

   ListNode*prev=NULL,*front=NULL;
   temp=head;
        
    while(count--){
        prev=temp;
      temp=temp->next;
    }
    prev->next=NULL;
    ListNode* head1=head;
    ListNode* head2=reverse(temp,NULL);

    while(head1){
        if (head1->val!=head2->val)return 0;

        head1=head1->next;
        head2=head2->next;

    }
return 1;

    
    
        
    }
};