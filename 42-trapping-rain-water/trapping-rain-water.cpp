class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax = 0 , rightmax = 0 , ans = 0 , maxheight = INT_MIN , index = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(height[i]>maxheight)
            {
                maxheight = height[i];
                index = i;
            }
        }
        for(int i = 0 ; i<index ; i++)
        {
            if(leftmax>=height[i])
            ans+=(leftmax-height[i]);
            else
            leftmax = height[i];
        }
        for(int i = n-1 ; i>index ; i--)
        {
            if(rightmax>=height[i])
            ans+=(rightmax-height[i]);
            else
            rightmax = height[i];
        }
        return ans;

    }
};