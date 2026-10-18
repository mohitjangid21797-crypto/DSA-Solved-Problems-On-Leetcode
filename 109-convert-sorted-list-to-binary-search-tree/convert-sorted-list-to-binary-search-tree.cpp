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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode *listToBST(vector<int>&arr , int start , int end)
{
    if(start>end)
    return NULL;
    int mid = start + (end-start+1)/2;
    TreeNode *temp = new TreeNode(arr[mid]);
    temp->left = listToBST(arr , start  , mid-1);
    temp->right = listToBST(arr , mid+1 , end);
    return temp;
}

    TreeNode* sortedListToBST(ListNode* head) {
        ListNode *temp = head;
        vector<int>arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int start = 0 , end = arr.size()-1;
        TreeNode *root = listToBST(arr , start , end);
        return root;
        
    }
};