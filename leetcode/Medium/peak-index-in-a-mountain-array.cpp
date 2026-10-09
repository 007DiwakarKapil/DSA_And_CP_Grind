// Problem: Peak Index in a Mountain Array
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/peak-index-in-a-mountain-array/
// Solved on: 2026-10-09T21:03:28.858Z

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo=0,hi=arr.size()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]<=arr[mid+1]) lo=mid+1;
            else{
                hi=mid;
            }
        }
        return lo;
    }
};