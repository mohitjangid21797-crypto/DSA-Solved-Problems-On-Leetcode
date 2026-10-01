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
    ListNode* swapPairs(ListNode* head) {
        ListNode *first = new ListNode(0);
        first->next = head;
        head = first;
        ListNode *second, *prev, *curr;
        while(first->next)
        {
           second = first-> next;
            prev = first;
            curr = first-> next;
            int x = 2;
            while(x--&&curr)
            {
                ListNode * front = curr-> next;
                curr->next = prev;
                prev= curr;
                curr = front;
            }
            first->next = prev;
            second->next = curr;
            first = second;
            
            
            }
            ListNode * tail = head;
            head = head->next;
            delete tail;
            return head; 
    }
};