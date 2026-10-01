class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int start = 0 , end = (rows*cols)-1 , mid , ans = false;
        while(start<=end)
        {
            mid = end + (start-end)/2;
            int i = mid/cols  , j = mid%cols;
            if(matrix[i][j]==target)
            {
                ans = true;
                break;
            }
            else if(matrix[i][j]<target)
            start = mid+1;
            else
            end = mid-1;
        }
        return ans;
        
    }
};