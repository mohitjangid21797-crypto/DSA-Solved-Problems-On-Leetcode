class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int n = arr.size() , start = 0 , end = n-1 , mid , ans = 0;
       while(start<=end)
       {
        mid = end + (start-end)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            ans = mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])
        start = mid+1;
        else 
        end = mid-1;
       }
       return ans;
    }
};