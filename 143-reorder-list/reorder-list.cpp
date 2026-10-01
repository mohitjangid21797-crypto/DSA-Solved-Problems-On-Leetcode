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
   ListNode *reverse(ListNode *curr , ListNode *prev)
   {
    if(curr==NULL)
    return prev;
    ListNode *front = curr->next;
    curr->next = prev;
    return reverse(front , curr);
   }
    void reorderList(ListNode* head) {
      ListNode *head3 = new ListNode(0)  , *tail = head3;
      ListNode *temp = head;
      int count = 0;
      while(temp)
      {
        count++;
        tail->next = new ListNode(temp->val);
        tail = tail->next;
        temp = temp->next;
      }
      tail = head3;
      head3 = head3->next;
      delete tail;
      head3 = reverse(head3 , NULL);
      ListNode *curr1   = head , *curr2 = head3 , *prev = NULL;
      int x = count/2;
      while(x--)
      {
        ListNode *front1 = curr1->next , *front2 = curr2->next ;
        curr1->next = curr2;
        curr2->next = front1;
        curr1 = front1;
        prev = curr2;
        curr2 = front2;
      }
      if(count%2==0)
      {
       prev->next = NULL;
      }
      else
      curr1->next = NULL;

    }
};