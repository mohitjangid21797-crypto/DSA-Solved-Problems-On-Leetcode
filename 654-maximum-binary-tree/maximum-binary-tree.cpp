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
int maxIndex(vector<int>arr , int start , int end)
{
    int maximum = INT_MIN;
    int index = 0;
    for(int i = start ; i<=end; i++)
    {
        if(arr[i]>maximum)
        {
            maximum = arr[i];
            index = i;
        }
    }
    return index;
}
TreeNode *maximumBT(vector<int>&arr , int start , int end)
{
    if(start>end)
    return NULL;
    int k = maxIndex(arr , start , end);
    TreeNode *temp = new TreeNode(arr[k]);
    temp->left = maximumBT(arr , start , k-1);
    temp->right = maximumBT(arr , k+1 , end);
    return temp;
}
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int start = 0 , end = nums.size()-1;
        TreeNode *root = maximumBT(nums , start , end);
        return root;

        
        
    }
};