class Solution {
public:
    bool isPalindrome(string s) {
       string s1 = "" ;
       for(int i = 0 ; i<s.size() ; i++)
       {
        if(isalpha(s[i]))
        {
            if(s[i]>='a'&&s[i]<='z')
            s1+=s[i];
            else if(s[i]>='A'&&s[i]<='Z')
            s1+=s[i]-'A'+'a';
        }
        else if(isdigit(s[i]))
        s1+=s[i];
       }
       int start = 0  , end = s1.size()-1;
       while(start<end)
       {
           if(s1[start]!=s1[end])
           return false;
           start++;
           end--;
       }
       return true;
    }
};