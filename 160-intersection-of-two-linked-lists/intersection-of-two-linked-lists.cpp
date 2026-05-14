/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         if (!headA || !headB) return nullptr;
        ListNode*cur1=headA;
         ListNode*cur2=headB;
int cnt1=1,cnt2=1;
        while(cur1!=nullptr){
            cur1=cur1->next;
            cnt1++;
        }

        while(cur2!=nullptr){
            cur2=cur2->next;
            cnt2++;
        }
        int diff;
    if (cnt1>=cnt2){
        cur1=headA;
cur2=headB;
diff=cnt1-cnt2;
    }

    else {
        cur1=headB;
cur2=headA;
diff=cnt2-cnt1;
    }

while(diff--){
    cur1=cur1->next;
}
      
        while(cur1!=cur2){
             cur1=cur1->next;
              cur2=cur2->next;
        }

        if (cur1==nullptr)return nullptr;
        
        
       

        return cur1;



        
    }
};