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
// Delete the target node :
TreeNode *deleteBST(TreeNode *root , int target)
{
    // if root does not exist : 
    if(root==NULL)
    return NULL;
    // if root exist:
    else
    {
        if(target<root->val)
        {
            root->left = deleteBST(root->left , target);
            return root;
        }
        else if(target>root->val)
        {
            root->right = deleteBST(root->right , target);
            return root;
        }
        else
        {
            // 1. If target node is leaf node then delete it directly:
            if(!root->left&&!root->right)
            {
                delete root;
                return NULL;
            }
            // 2. If target node is node having exactly one child either left or right:
            else if(!root->left)
            {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }
            else if(!root->right)
            {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }
            // 3. If target node is a node having both child:
            else
            {
                TreeNode *parent = root;
                TreeNode *child = root->right;
                while(child->left)
                {
                    parent = child;
                    child = child->left;
                }
                if(parent!=root)
                {
                    parent->left = child->right;
                    child->left = root->left;
                    child->right = root->right;
                    delete root;
                    return child;
                }
                else
                {
                    child->left = root->left;
                    delete root;
                    return child;
                }
            }
        }
    }
    
}

    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode *root1 = deleteBST(root , key);
        return root1;
        
    }
};