class Solution {
public:
    int addDigits(int num) {
      int r , ans = 0;
      while(num>9)
      {
        while(num!=0)
        {
            r = num%10;
            num/=10;
            ans = ans+r;
        }
        num = ans;
        ans = 0;
      }
      return num;
        
    }
};