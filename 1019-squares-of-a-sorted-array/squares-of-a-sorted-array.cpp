class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i,j;
        for( i = 0 ; i<n ; i++){
            nums[i] = pow(nums[i],2);
        }
        for(i=1 ; i<=n-1 ; i++){
            for(j=0 ; j<n-1 ; j++){
            if(nums[j]>nums[j+1])
            swap(nums[j],nums[j+1]);
            }
        }
        return nums;
    }
};