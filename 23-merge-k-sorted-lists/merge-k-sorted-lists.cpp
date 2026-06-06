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



 ListNode*merge(ListNode*cur1, ListNode*cur2){
    ListNode*head=new ListNode(0);
    ListNode *tail=head;

    while(cur1&&cur2){
if ( cur1->val<=cur2->val){
    tail->next=cur1;
    cur1=cur1->next;
    tail=tail->next;
    tail->next=nullptr;
}
else{
    tail->next=cur2;
    cur2=cur2->next;
    tail=tail->next;
    tail->next=nullptr;

}


    
    }
    if ( cur1){
        tail->next=cur1;
    }
    else{
        tail->next =cur2;
    }
    return head->next;



 }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
if (lists.empty()) return nullptr;
        ListNode* head=lists[0];
        for( int i=1;i<lists.size();i++){
           head=merge(head,lists[i]);

        }
        return head;
        
    }
};