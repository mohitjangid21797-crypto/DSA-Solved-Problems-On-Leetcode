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
     TreeNode *BST(vector<int>&arr , int start , int end)
     {
        if(start>end)
        return NULL;
        int mid = start + (end-start)/2;
        TreeNode *temp = new TreeNode(arr[mid]);
        temp->left = BST(arr , start , mid-1);
        temp->right = BST(arr , mid+1 , end);
        return temp;
     }
  
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root = BST(nums , 0 , nums.size()-1);
        return root;
      
        
    }
};