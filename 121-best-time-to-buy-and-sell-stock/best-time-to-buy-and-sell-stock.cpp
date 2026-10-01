class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int num = prices.size();
     int p = 0;
    int x = INT_MAX ;
    int ans = 0;
     for(int i = 0 ; i<num ; i++){
        x = min(x, prices[i]);
        p = prices[i]-x;
        ans = max(ans,p);
     }
     return ans;
     
 }
};