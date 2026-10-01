class Solution {
public:
void permutation(vector<int>&arr , int index , int n , vector<vector<int>>&temp)
{
    if(index==n)
    {
        temp.push_back(arr);
        return;
    }
    for(int i = index ; i<arr.size() ; i++)
    {
        swap(arr[index] , arr[i]);
        permutation(arr , index+1 , n , temp);
        swap(arr[index] , arr[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0 , n = nums.size();
        vector<vector<int>>temp;
        permutation(nums, index , n , temp);
        return temp;
        
    }
};