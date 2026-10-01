class Solution {
public:
string reverse(string s)
{
    int start = 0 , end = s.size()-1;
    while(start<end)
    {
        swap(s[start] , s[end]);
        start++;
        end--;
    }
    return s;
}
    string addBinary(string a, string b) {
        string s1 = "";
        a = reverse(a);
        b = reverse(b);
        int index1 = 0 , index2 = 0;
        int sum = 0 , carry = 0;
        while(index1<a.size()&&index2<b.size())
        {
          sum  = a[index1]-'0' + b[index2] - '0' + carry;
          carry = sum/2;
          s1+=(sum%2)+'0';
          index1++;
          index2++;
        }
        while(index1<a.size())
        {
            sum = a[index1]-'0' + carry;
            carry = sum/2;
            s1+=(sum%2)+'0';
            index1++;
        }
        while(index2<b.size())
        {
            sum = b[index2]-'0' + carry;
            carry = sum/2;
            s1+=(sum%2)+'0';
            index2++;
        }
        if(carry)
        {
            s1+=(carry%2)+'0';
            carry/=2;
        }
        s1 = reverse(s1);
        return s1;
    }
};