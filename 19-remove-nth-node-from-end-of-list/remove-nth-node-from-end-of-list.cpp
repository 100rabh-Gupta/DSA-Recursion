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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while (temp) {
            temp = temp->next;
            count++;
        }
        cout << count;
        temp = head;
        ListNode* prev;
        int last = count - n;
        if (last == 0) {
            ListNode* del = head;
            head = head->next;
            delete del;
        }

        else {
            while (last--) {
                prev = temp;
                temp = temp->next;
            }
            prev->next=temp->next;
            delete temp;
        }

        return head;
    }
};