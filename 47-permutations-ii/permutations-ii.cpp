class Solution {
public:
void permutationrepeat(vector<int>&arr , int index , int n , vector<vector<int>>&temp)
{
    if(index==n)
    {
        temp.push_back(arr);
        return;
    }
    vector<int>use(21,0);
    for(int i = index ; i<arr.size() ; i++)
    {
        int x = 10+arr[i];
        if(use[x]==0)
        {
            swap(arr[index] , arr[i]);
            permutationrepeat(arr , index+1 , n , temp);
            swap(arr[index] , arr[i]);
            use[x] = 1;

        }
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int index = 0 , n = nums.size();
        vector<vector<int>>temp;
        permutationrepeat(nums , index , n ,temp );
        return temp;
    }
};