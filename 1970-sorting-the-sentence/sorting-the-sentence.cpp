class Solution {
public:
    string sortSentence(string s) {
        int count = 0;
        vector<string>words(10 , "");
        string temp = "";
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(s[i]==' ')
            {
                int pos = temp.back()-'0';
                temp.pop_back();
                words[pos] = temp;
                temp = "";
                count++;
            }
            else
            temp+=s[i];
        }
        int pos = temp.back()-'0';
        temp.pop_back();
        words[pos] = temp;
        count++;
        string ans;
        for(int i = 1  ;i<=count ; i++)
        {
            ans+=words[i];
            if(i<count)
            ans+=" ";
        }
        return ans;
        
    }
};