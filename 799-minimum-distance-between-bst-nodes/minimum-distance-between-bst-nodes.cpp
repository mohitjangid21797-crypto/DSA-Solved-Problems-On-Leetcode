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
    void minimumDistance(TreeNode *root , int &ans , int &prev)
    {
        if(root==NULL)
        return ;
        minimumDistance(root->left , ans , prev);
        if(prev!=INT_MIN)
        {
            ans = min(ans , root->val-prev);
        }
        prev = root->val;
        minimumDistance(root->right , ans , prev);
    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        int prev = INT_MIN;
        minimumDistance(root , ans , prev);
        return ans;
       
        
    }
};