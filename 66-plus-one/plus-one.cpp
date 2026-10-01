class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        string s = "";
        vector<int>ans;
        for(int i = 0 ; i<n ; i++)
        s+=to_string(digits[i]);

        int start = 0 , end = s.size()-1;
        while(start<end)
        {
            swap(s[start] , s[end]);
            start++;
            end--;
        }
        int sum = 0 , carry = 1;
        int index = 0;
        while(index<s.size())
        {
            sum = s[index]-'0' + carry;
            carry = sum/10;
            ans.push_back(sum%10);
            index++;
        }
        while(carry)
        {
           ans.push_back(carry%10) ;
           carry/=10;
        }
        start =0 , end = ans.size()-1;
        while(start<end)
        {
            swap(ans[start], ans[end]);
            start++;
            end--;
        }
        return ans;
    }
};