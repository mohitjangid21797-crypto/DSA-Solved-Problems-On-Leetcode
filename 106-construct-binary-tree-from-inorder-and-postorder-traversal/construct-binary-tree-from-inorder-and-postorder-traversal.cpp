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
TreeNode *BT(vector<int>&postorder , vector<int>&inorder , int start , int end , int index)
{
    if(index==postorder.size()||start>end)
    return NULL;
    TreeNode *temp = new TreeNode(postorder[index]);
    int pos = findIndex(inorder , start , end , postorder[index]);
    temp->right = BT(postorder , inorder , pos+1 , end , index+1);
    temp->left = BT(postorder , inorder  , start , pos-1, index + end-pos+1);
    return temp;

}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int start = 0 , end = postorder.size()-1;
        while(start<end)
        {
            swap(postorder[start] , postorder[end]);
            start++;
            end--;
        }
        TreeNode *root = BT(postorder , inorder , 0 , postorder.size()-1 , 0);
        return root;
        
    }
};