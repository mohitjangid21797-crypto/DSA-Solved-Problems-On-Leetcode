class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        priority_queue<int>p;
        for(int i = 0 ; i<gifts.size() ; i++)
        p.push(gifts[i]);

        while(k--)
        {
            int x = sqrt(p.top());
            p.pop();
            p.push(x);
        }
        while(!p.empty())
        {
            ans+=p.top();
            p.pop();
        }
        return ans;
        
    }
};