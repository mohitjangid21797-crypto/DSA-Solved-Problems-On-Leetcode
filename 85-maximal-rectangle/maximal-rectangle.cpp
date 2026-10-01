class Solution {
public:
int rectangle(vector<int>&arr, int n)
{
    int ans = 0;
    stack<int>st;
    for(int i = 0 ;i<n ; i++)
    {
        while(!st.empty()&&arr[i]<arr[st.top()])
        {
            int x= st.top();
            st.pop();
            if(!st.empty())
            ans = max(ans , arr[x]*(i-st.top()-1));
            else
            ans = max(ans , arr[x]*i);
        }
        st.push(i);
    }
    while(!st.empty())
        {
            int x = st.top();
            st.pop();
            if(!st.empty())
            ans = max(ans , arr[x]*(n-st.top()-1));
            else
            ans = max(ans , arr[x]*n);
        }
        return ans;
}
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
      int ans = 0;
      vector<int>arr(cols , 0);
      for(int i = 0 ; i<rows ; i++)
      {
        for(int j = 0 ; j<cols ; j++)
        {
            if(matrix[i][j]=='0')
            arr[j] = 0;
            else
            arr[j]+=1;
        }
        ans = max(ans , rectangle(arr , cols));
      }
      return ans;
    }
};