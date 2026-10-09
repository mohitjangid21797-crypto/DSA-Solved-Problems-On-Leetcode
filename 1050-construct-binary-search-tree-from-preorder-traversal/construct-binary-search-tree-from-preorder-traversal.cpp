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
TreeNode *BST(vector<int>&preorder , int &index , int lower , int upper)
{
    if(index==preorder.size()||(preorder[index]<lower||preorder[index]>upper)) 
    {
        return NULL;
    }
    TreeNode *temp = new TreeNode(preorder[index++]);
    temp->left = BST(preorder , index , lower , temp->val);
    temp->right = BST(preorder , index , temp->val , upper);
    return temp;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        int lower = INT_MIN  , upper =  INT_MAX;
        TreeNode *root = BST(preorder , index ,lower , upper);
        return root;
        
    }
};