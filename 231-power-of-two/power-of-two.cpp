class Solution {
public:
    bool isPowerOfTwo(int n) {
        int  r , count = 0;
        int check = n;
        if(n<=INT_MIN)
        return 0;
        while(n!=0)
        {
            r = n%2;
            if(r==0)
            count++;
            n/=2;
        }
        int x = pow(2 , count);
        if(x==check)
        return true;
        else
        return false;

    }
};