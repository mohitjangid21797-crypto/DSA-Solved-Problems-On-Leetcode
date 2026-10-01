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
bool isPalindrome(ListNode *head)
{
    if(head->next==NULL)
    return head;
    ListNode *temp = head;
    int count = 0;
    while(temp) 
    {
        count++;
        temp = temp->next;
    }
    count/=2;
    count-=1;
    temp = head;
    while(count--)
    {
        temp = temp->next;
    }
    ListNode *head2 = reverse(temp->next , NULL);
    temp->next = NULL;
    ListNode *curr1 = head;
    ListNode *curr2 = head2;
    bool check =  true;
    while(curr1&&curr2)
    {
        if(curr1->val!=curr2->val)
        {
            check = false;
            break;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    if(check)
    return true;
    else
    return false;
}
};