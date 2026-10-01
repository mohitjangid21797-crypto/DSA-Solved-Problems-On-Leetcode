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
    int getDecimalValue(ListNode* head) {
        ListNode *temp = head;
        int count = 0;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
       int ans = 0 , i = pow(2 , count-1);
       temp = head;
       while(temp)
       {
        ans+=temp->val*i;
        i/=2;
        temp = temp->next;
       } 
       return ans;
    }
};