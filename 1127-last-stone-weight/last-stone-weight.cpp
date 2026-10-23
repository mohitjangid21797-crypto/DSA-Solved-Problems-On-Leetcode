class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
        return stones[0];
        else
        {
            priority_queue<int>p;
            for(int i = 0 ; i<stones.size(); i++)
            p.push(stones[i]);
            int ans = 0;
            while(p.size()>1)
            {
                int max1 = p.top();
                p.pop();
                int max2  = p.top();
                p.pop();
                p.push(max1-max2);
                
            }
            ans = p.top();
            return ans;
        }
        
    }
};