class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        if(arr.size()==1)
        return;
        else if(arr.size()>=2)
        {
           int start = 0 , end= 1;
           while(end<arr.size())
           {
            if(arr[start]==0&&arr[end]!=0)
            {
                swap(arr[start],arr[end]);
                start++;
                end++;
            }
            else if(arr[start]!=0&&arr[end]==0||arr[start]!=0&&arr[end]!=0)
            {
                start++;
                end++;
            }
            else
            {
                end++;
            }
           }
        }
   
    }
};