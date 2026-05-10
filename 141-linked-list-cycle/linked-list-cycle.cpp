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
int n=10000;
        while (n--){
            if (tail->next==nullptr)
            return false;
            tail=tail->next;
        }
        return true;

        
    }
};