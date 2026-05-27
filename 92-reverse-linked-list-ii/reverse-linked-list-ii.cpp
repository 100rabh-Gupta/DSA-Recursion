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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head->next == nullptr || left == right || head == nullptr)
            return head;
        ListNode dummy(0);
        dummy.next = head;

        ListNode* leftn = &dummy;

        ListNode* rightn = head;

        for (int i = 1; i < left; i++) {
            leftn = leftn->next;
        }
       
      
 

        ListNode* prev = nullptr;
        ListNode* curr = leftn->next;

        for (int i = left; i <= right; i++) {
         ListNode* front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
        }
      
        
        leftn->next->next = curr;
        leftn->next = prev;

       return dummy.next;
    }
};