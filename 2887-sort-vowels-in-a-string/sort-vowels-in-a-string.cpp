class Solution {
public:
    string sortVowels(string s) {
        string ans = "";
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u')
            {
                lower[s[i]-'a']+=1;
                s[i] = '#';
            }
            if(s[i]=='A'||s[i]=='I'||s[i]=='E'||s[i]=='O'||s[i]=='U')
            {
                upper[s[i]-'A']+=1;
                s[i] = '#';
            }
        }
        for(int i = 0 ; i<26 ; i++)
        {
            while(upper[i])
            {
                ans+=(i+'A');
                upper[i]--;
            }
        }
        for(int i = 0 ; i<26 ; i++)
        {
            while(lower[i])
            {
                ans+=(i+'a');
                lower[i]--;
            }
        }
        int i =0 , j = 0;
        while(i<ans.size())
        {
            if(s[j]=='#')
            {
                s[j] = ans[i];
                i++;
            }
            j++;
        }
        return s;

        
    }
};