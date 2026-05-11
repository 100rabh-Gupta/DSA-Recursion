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
    bool hasCycle(ListNode *head) {
        if (head==nullptr||head->next==nullptr){
            return false;
        }
ListNode *tail=head;

        for (int i=0;i<=10000;i++){
            if (tail->next==nullptr)
            return false;
            tail=tail->next;
        }
        return true;

        
    }
};