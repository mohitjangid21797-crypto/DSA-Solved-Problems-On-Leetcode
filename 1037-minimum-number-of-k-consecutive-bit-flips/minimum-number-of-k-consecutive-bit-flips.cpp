class Solution {
public:
int minKBitFlips(vector<int>& arr, int k) {
      int flip= 0;
      queue<int>q;
      for(int i = 0 ; i<arr.size() ; i++)
      {
        if(!q.empty()&&q.front()<i)
        q.pop();
        if(q.size()%2==arr[i])
        {
            if(i+k-1>=arr.size())
            {return -1;}
            q.push(i+k-1);
            flip++;
        }
      }
      return flip;
    }
};

