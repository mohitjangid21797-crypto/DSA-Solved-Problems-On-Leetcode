class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0;
        int rightSum = 0;
        int ans , diff;
        int index;
        for(int i=0; i<n ; i++){
            index = i;
            for(int i=0 ; i<index ; i++)
                leftSum+=nums[i];
            for(int j=index+1 ; j<n ; j++)
                rightSum+=nums[j];
            diff = leftSum-rightSum;
            ans = i;
            if(diff==0){
            return ans;
            break;
            }
            leftSum=0;
            rightSum = 0;
        }
        return -1;
    }
};