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


    int pairSum(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        
        int count=0;

        while(temp&&temp->next){
            slow=slow->next;
            temp=temp->next->next;

        }
        temp=head;
      
        ListNode* head2=reverse(slow,nullptr);
        long long ans=INT_MIN;

while(head2){
    long long sum=temp->val+head2->val;
    ans=max(sum,ans);
    temp=temp->next;
    head2=head2->next;
}



return ans;
        
    }
};