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
int findIndex(vector<int>inorder , int start , int end , int target)
{
    for(int i = start ; i<=end ; i++)
    {
        if(inorder[i]==target)
        return i;
    }
    return -1;
}
TreeNode *BT(vector<int>&preorder , vector<int>&inorder , int start , int end , int index)
{
    if(index==preorder.size()||start>end)
    return NULL;
    TreeNode *temp = new TreeNode(preorder[index]);
    int pos = findIndex(inorder , start , end , preorder[index]);
    temp->left = BT(preorder , inorder , start , pos-1 , index+1);
    temp->right = BT(preorder , inorder , pos+1 , end , index + pos-start+1);
    return temp;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *root = BT(preorder , inorder , 0 , preorder.size()-1 , 0);
        return root;
    }
};