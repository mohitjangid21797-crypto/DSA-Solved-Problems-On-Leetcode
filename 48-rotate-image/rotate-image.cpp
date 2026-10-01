class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        // 1.  Transpose of matrix: 
        for(int i = 0 ; i<rows ; i++)
        {
            for(int j = i ; j<cols ; j++)
            {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        // 2 . Reverse each rows:
        for(int i = 0 ; i<rows ; i++)
        {
            int start = 0 , end = cols-1;
            while(start<end)
            {
                swap(matrix[i][start] , matrix[i][end]);
                start+=1;
                end-=1;
            }
        }
        
    

        
    }
};