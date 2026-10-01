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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *temp = head;
        vector<ListNode*>arr;
        while(temp)
        {
            ListNode *front = temp->next;
            arr.push_back(temp);
            temp->next = NULL;
            temp = front;
        }
        head = NULL;
        for(int i = 1; i<arr.size() ; i++)
        {
            for(int j = i ; j>0 ; j--)
            {
                if(arr[j]->val<=arr[j-1]->val)
                swap(arr[j] , arr[j-1]);
            }
        }
        head = new ListNode (0) ;
        ListNode *tail = head;
        for(int i = 0 ; i<arr.size(); i++)
        {
            tail->next = arr[i];
            tail = tail->next;
        }
        tail = head;
        head = head->next;
        delete tail;
        return head;
    }
};