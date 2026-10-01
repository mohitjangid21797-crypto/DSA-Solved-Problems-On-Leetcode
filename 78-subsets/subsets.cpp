class Solution {
public:
void printSubsequences(vector<int>&nums , int index , int n , vector<int>&temp , vector<vector<int>>&ans)
{
    if(index==n)
    {
        ans.push_back(temp);
        return ;
    }
    temp.push_back(nums[index]);
    printSubsequences(nums , index+1 , n ,temp , ans);
    temp.pop_back();
    printSubsequences(nums , index+1 , n ,temp , ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int index = 0 ,n = nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        printSubsequences(nums , index , n , temp , ans);
        return ans;
        
    }
};