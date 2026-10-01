class Solution {
public:
  bool MatchingString(string s1 , string s2)
  {
    int prefix = 0 , suffix = 1 , n1 = s1.size() , n2 = s2.size();
    vector<int>lps(n2,0);
    while(suffix<n2)
    {
        if(s2[prefix]==s2[suffix])
        {
            lps[suffix] = prefix+1;
            prefix++;
            suffix++;
        }
        else
        {
            if(prefix==0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
            prefix = lps[prefix-1];
        }
    }
    int first = 0 , second = 0;
    while(first<n1 && second<n2)
    {
        if(s1[first]==s2[second])
        {
            first++;
            second++;
        }
        else
        {
            if(second==0)
            first++;
            else
            second = lps[second-1];
        }
        if(second==n2)
        {
          return true;
          break;
        }
    }
    return false;
  }

    int repeatedStringMatch(string a, string b) {
        int a1 = a.size();
        int b1 = b.size();
        string repeatedwords = a;
        int repeatcount = 1;
        while(repeatedwords.size()<b1)
        {
            repeatedwords+=a;
            repeatcount++;
        }
        if(MatchingString(repeatedwords , b)==true)
        return repeatcount;
        if(MatchingString(repeatedwords+a , b)==true)
        return repeatcount+1;
        else
        return -1;
  
    }
};