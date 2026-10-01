class Solution {
public:
    int singleNumber(vector<int>& arr) {
        unordered_map<int , int>m;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            m[arr[i]]+=1;
        }
        for(int i = 0 ; i<arr.size() ; i++)
        {
            if(m[arr[i]]==1)
            return arr[i];
        }
        return 0;
    }
};