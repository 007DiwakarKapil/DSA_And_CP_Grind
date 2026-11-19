// Problem: Find Rotation Count
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/rotation4723/1
// Solved on: 2026-11-19T15:09:20.282Z

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int lo=0,hi=arr.size()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>arr[hi]) lo=mid+1;
            else hi=mid;
        }
        return lo;
    }
};