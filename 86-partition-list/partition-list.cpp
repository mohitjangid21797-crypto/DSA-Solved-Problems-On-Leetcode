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
    ListNode* partition(ListNode* head, int x) {
      ListNode *temp = head;
      vector<int>arr;
      while(temp)
      {
        arr.push_back(temp->val);
        temp = temp->next;
      }
      int pos  = 0;
      for(int i = 0 ; i<arr.size() ; i++)
      {
        if(arr[i]<x)
        {
            swap(arr[i] , arr[pos]);
            pos++;
        }
      }
      vector<int>arr2;
      temp = head;
      while(temp)
      {

        if(temp->val>=x)
        {
            arr2.push_back(temp->val);
        }
        temp = temp->next;
      }
      int j = 0;
      for(int i = pos ; i<arr.size() ; i++)
      {
        arr[i] = arr2[j];
        j++;
      }
      ListNode *head3 = new ListNode(0) , *tail = head3;
      for(int i = 0 ; i<arr.size() ; i++)
      {
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
      }
      tail = head3;
      head3 = head3->next;
      delete tail;
      return head3;
      

        
    }
};