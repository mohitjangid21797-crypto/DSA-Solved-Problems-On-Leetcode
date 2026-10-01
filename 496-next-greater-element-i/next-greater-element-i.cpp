class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr1, vector<int>& arr2) {
      int n1 = arr1.size() , n2 = arr2.size();
      vector<int>ansn2(n2 , -1);
      vector<int>ans(n1 , 0);
      unordered_map<int , int>m;
      stack<int>st;
      for(int i = 0 ; i<arr2.size() ; i++)
      {
        while(!st.empty()&&arr2[i]>arr2[st.top()])
        {
            ansn2[st.top()] = arr2[i];
            st.pop();
        }
        st.push(i);
      }
      for(int i = 0 ; i<arr2.size() ; i++)
      {
        m[arr2[i]] = ansn2[i];
      }
      for(int i = 0 ; i<arr1.size() ; i++)
      {
        ans[i] = m[arr1[i]];
      }
      return ans;
    }
};