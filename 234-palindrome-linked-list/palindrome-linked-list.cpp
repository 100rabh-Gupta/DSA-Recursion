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
    bool isPalindrome(ListNode* head) {

        ListNode*temp=head;
        vector<int>ans;
        while(temp){
           ans.push_back( temp->val);
           temp=temp->next;

        }
        int end=ans.size()-1,start=0;


        
    while(start<=end){
         if ( ans[start]!=ans[end])return 0;
         start++;
         end--;
    }
    return 1;
    
        
    }
};