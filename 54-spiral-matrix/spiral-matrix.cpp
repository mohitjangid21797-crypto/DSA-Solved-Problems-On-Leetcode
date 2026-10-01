class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int rows = arr.size();
        int cols = arr[0].size();
        int top = 0 , bottom = rows-1 , left = 0 , right = cols-1;
        vector<int>spiral(0,0);
    while(top<=bottom && left<=right)
    {
        for(int i = left ; i<=right ; i++)
        {
            spiral.push_back(arr[top][i]);
        }
        top++;
        for(int j = top ; j<=bottom ; j++)
        {
            spiral.push_back(arr[j][right]);
        }
        right--;
        if(top<=bottom)
        {
            for(int i = right ; i>=left ; i--)
        {
            spiral.push_back(arr[bottom][i]);
        }
        bottom--;
        }
        if(left<=right)
        {
        for(int j = bottom ; j>=top ; j--)
        {
            spiral.push_back(arr[j][left]);
        }
        left++;
        }
    }
    return spiral;
        
    }
};