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
ListNode*merge(ListNode*c1,ListNode*c2){
    ListNode dummy(0);
ListNode*tail=&dummy;
while( c1&&c2){
    if (c1->val<c2->val){
        tail->next=c1;
        c1=c1->next;
    }
    else{
         tail->next=c2;
        c2=c2->next;
    }
    




    tail=tail->next;
}
if (c1){
        tail->next=c1;
    }
    else {
        tail->next=c2;
    }
    return dummy.next;

}
ListNode*findm(ListNode*head){
    ListNode*s=head;
    ListNode*f=head->next;
    while(f && f->next){s=s->next;
    f=f->next->next;

    }
    return s;
}
    ListNode* sortList(ListNode* head) {
        if( head==nullptr||head->next==nullptr)return head;
        
        ListNode* mid=findm(head);
        ListNode*righthead=mid->next;
        mid->next=nullptr;
        ListNode *left=sortList(head);
        ListNode*right=sortList(righthead);

         return merge(left,right);

    }
};