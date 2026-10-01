class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() , candidate , count = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(count==0)
            {
                candidate = nums[i];
                count = 1;
            }
            else if(count!=0)
            {
                if(nums[i]==candidate)
                count+=1;
                else
                count-=1;
            }
        }
        count = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(nums[i]==candidate)
            count+=1;
        }
        int y = n/2;
        if(count>y)
        return candidate;
        else
        return -1;
    }

};