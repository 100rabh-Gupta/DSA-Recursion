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
    if (curr==nullptr)return prev;
    ListNode* front=curr->next;

    curr->next=prev;
     return reverse (front,curr);
 }
    ListNode* doubleIt(ListNode* head) {
        
        ListNode * temp=reverse(head,nullptr);
        ListNode* nhead=temp;
int cary=0;

ListNode * last;
        while(temp){
int value=(temp->val*2)+cary;
temp->val=value%10;
cary=value/10;
last=temp;
temp=temp->next;

        }
        while(cary){
            last->next=new ListNode(cary%10);
            cary/=10;
            last=last->next;



        }
        temp=reverse(nhead,nullptr);
        return temp;


        
    }
};