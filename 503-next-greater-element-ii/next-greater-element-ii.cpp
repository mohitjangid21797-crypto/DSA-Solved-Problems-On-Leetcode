class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        vector<int>ans(arr.size() , -1);
        int n = arr.size();
        stack<int>st;
        for(int i = 0 ; i<2*arr.size() ; i++)
        {
            while(!st.empty()&&arr[i%n]>arr[st.top()%n])
            {
                ans[st.top()%n] = arr[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return ans;

    }
};