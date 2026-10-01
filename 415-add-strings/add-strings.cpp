class Solution {
      string sumString(string s1 , string s2)
      {
          int index1 = s1.size()-1 , index2 = s2.size()-1;
    int sum = 0 , carry = 0;
    string ans = "";
    while(index2>=0)
    {
        sum = s1[index1]-'0' + s2[index2]-'0' + carry;
        carry = (sum/10);
        ans+=char(sum%10  + '0');
        index2--;
        index1--;
}
     while(index1>=0)
    {
    sum = s1[index1]-'0' + carry;
    carry = (sum/10);
    ans+=char(sum%10 + '0');
    index1--;
   }
if(carry)
ans+=(carry+'0');

int start= 0  ,end = ans.size()-1;
while(start<end)
{
    swap(ans[start] , ans[end]);
    start++;
    end--;
}
return ans;
      }
public:
    string addStrings(string num1, string num2) {
        int x1 = num1.size();
        int x2 = num2.size();
        string ans;
        if(x1>=x2)
        ans = sumString(num1 , num2);
        else
        ans = sumString(num2 , num1);
        return ans;

        
    }
};