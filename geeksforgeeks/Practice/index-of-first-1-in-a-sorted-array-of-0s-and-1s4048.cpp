// Problem: First 1 in Sorted Binary
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s4048/1
// Solved on: 2026-11-19T15:59:54.137Z

class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        int lo=0,hi=arr.size()-1,ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==1){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};