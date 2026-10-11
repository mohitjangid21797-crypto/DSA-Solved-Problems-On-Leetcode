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
TreeNode *bstFromPreorderroot(vector<int>&arr , int lower , int upper , int &index)
{
    if(index==arr.size()||arr[index]<lower||arr[index]>upper)
    return NULL;
    TreeNode *temp = new TreeNode(arr[index++]);
    temp->left = bstFromPreorderroot(arr , lower , temp->val , index);
    temp->right = bstFromPreorderroot(arr , temp->val , upper , index);
    return temp;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int lower = INT_MIN;
        int upper = INT_MAX;
        int index = 0;
        TreeNode *root = bstFromPreorderroot(preorder , lower , upper , index);
        return root;
        
    }
};