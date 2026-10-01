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
        int count1= 0 , count2 = 0;
        ListNode* temp = headA;
        while(temp)
        {
            count1++;
            temp = temp->next;
        }
        temp = headB;
        while(temp)
        {
            count2++;
            temp = temp->next;
        }
        int x = max(count1, count2) - min(count1 , count2);
        ListNode *curr1 = headA , *curr2 =  headB;
        if(count1>count2)
        {
           while(x--)
           curr1 = curr1->next;
        }
        else if(count2>count1)
        {
             while(x--)
           curr2 = curr2->next;
        }
        while(curr1!=curr2)
        {
            curr1 = curr1->next;
            curr2= curr2->next;
        }
      return curr1;
    }
};