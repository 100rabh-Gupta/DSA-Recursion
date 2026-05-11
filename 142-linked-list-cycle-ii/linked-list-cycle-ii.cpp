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
    ListNode *detectCycle(ListNode *head) {
           if (head==nullptr||head->next==nullptr){
            return nullptr;
        }
        int index=0;
        ListNode *position=head;
        ListNode *temp;
        
       while(position){
        int n=10000;
        temp=position->next;
        while(temp&&n--){
            if (temp->next==nullptr){
                return nullptr;
            }
            if (temp==position){
                return position;
            }

           temp=temp->next;

        }
        position=position->next;
         index++;
       }
       return nullptr;
    }
};