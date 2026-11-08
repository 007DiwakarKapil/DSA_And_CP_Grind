// Problem: Second Largest
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/second-largest3735/1
// Solved on: 2026-11-08T13:43:42.085Z

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max) max=arr[i];
        }
        int smax=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>smax && arr[i]<max) smax=arr[i];
        }
        return smax;
    }
};