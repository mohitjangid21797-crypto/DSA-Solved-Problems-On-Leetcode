class Solution {
public:
    bool backspaceCompare(string s, string t) {
         stack<char>st1;
         stack<char>st2;
         for(int i = 0 ; i<s.size() ; i++)
         {
            if(st1.empty())
            st1.push(s[i]);
            else if(st1.top()!='#'&&s[i]=='#')
            st1.pop();
            else if(st1.top()!='#'&&s[i]!='#')
            st1.push(s[i]);
            else if(st1.top()=='#'&&s[i]!='#')
            {
                st1.pop();
                st1.push(s[i]);
            }
         }
         string s1 = "";
         while(!st1.empty())
         {
            s1+=st1.top();
            st1.pop();
         }
         for(int i = 0 ; i<t.size() ; i++)
         {
            if(st2.empty())
            st2.push(t[i]);
            else if(st2.top()!='#'&&t[i]=='#')
            st2.pop();
            else if(st2.top()!='#'&&t[i]!='#')
            st2.push(t[i]);
            else if(st2.top()=='#'&&t[i]!='#')
            {
                st2.pop();
                st2.push(t[i]);
            }
         }
         string t1 = "";
         while(!st2.empty())
         {
            t1+=st2.top();
            st2.pop();
         }
         if(s1==t1)
         return true;
         else
         return false;


    }
};