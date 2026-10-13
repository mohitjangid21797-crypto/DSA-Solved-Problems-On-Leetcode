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
 void Inorder(TreeNode *root , vector<int>&arr)
 {
    if(root==NULL)
    return;
    Inorder(root->left , arr);
    arr.push_back(root->val);
    Inorder(root->right , arr);
 }
 TreeNode *balanceBST(vector<int>&arr, int start , int end)
 {
    if(start>end)
    return NULL;
    int mid = start + (end-start)/2;
    TreeNode *temp = new TreeNode(arr[mid]);
    temp->left = balanceBST(arr , start , mid-1);
    temp->right = balanceBST(arr , mid+1 , end);
    return temp;

 }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>arr;
        Inorder(root , arr);
        int start = 0 , end = arr.size()-1;
        TreeNode *root1 = balanceBST(arr, start , end);
        return root1;
    }
};