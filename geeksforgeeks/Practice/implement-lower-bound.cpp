// Problem: Implement Lower Bound
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/implement-lower-bound/1
// Solved on: 2026-10-08T13:50:26.266Z

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int lo=0;
        int hi=arr.size()-1;
        int a=arr.size();
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]<target) lo=mid+1;
            else{
                a=mid;
                hi=mid-1;
            }
        }
        return a;
    }
};
