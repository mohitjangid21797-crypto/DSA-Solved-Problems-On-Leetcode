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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int , int>m;
        ListNode *temp = head;
        vector<int>arr;
        while(temp)
        {
            m[temp->val]+=1;
            temp = temp->next;
        }
        temp = head;
        while(temp)
        {
            if(m[temp->val]==1)
            arr.push_back(temp->val);
            temp = temp->next;
        }
        ListNode *head3 = new ListNode(0),  *tail = head3;
        for(int i = 0  ; i<arr.size() ; i++)
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