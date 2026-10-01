class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(isalpha(s[i])&&st.empty())
            st.push(s[i]);
            else if(isalpha(st.top())&&isdigit(s[i]))
            st.pop();
            else if(isalpha(s[i]))
            st.push(s[i]);
        }
        string s1 = "";
        while(!st.empty())
        {
            s1+=st.top();
            st.pop();
        }
        int start = 0 , end = s1.size()-1;
        while(start<end)
        {
            swap(s1[start],  s1[end]);
            start++;
            end--;
        }
        return s1;
    }
};