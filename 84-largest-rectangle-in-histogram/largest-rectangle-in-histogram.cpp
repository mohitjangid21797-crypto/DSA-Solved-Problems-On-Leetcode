class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        stack<int>st;
        int ans = 0;
        for(int i = 0 ; i<n ; i++)
        {
            while(!st.empty()&&arr[i]<arr[st.top()])
            {
                int x = st.top();
                st.pop();
                if(!st.empty())
                ans = max(ans , arr[x]*(i-st.top()-1));
                else
                ans = max(ans , arr[x]*(i));

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
            ans = max(ans , arr[x]*(n));
        }
        return ans;
    }
};