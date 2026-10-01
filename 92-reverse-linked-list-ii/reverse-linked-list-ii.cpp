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
        ListNode *temp = head;
        vector<int>arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp =temp->next;
        }
        int start = left-1 , end = right-1;
        while(start<end)
        {
            swap(arr[start]   , arr[end]);
            start++;
            end--;
        }
        ListNode *head3 = new ListNode(0) , *tail = head3;
        for(int i= 0 ; i<arr.size() ; i++)
        {
            tail->next = new ListNode(arr[i]);
            tail= tail->next;
        }
        tail  = head3;
        head3 = head3->next;
        delete tail;
        return head3;

    }
};