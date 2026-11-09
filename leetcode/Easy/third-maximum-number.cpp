// Problem: Third Maximum Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/third-maximum-number/
// Solved on: 2026-11-09T09:06:36.102Z

class Solution {
public:
    int thirdMax(vector<int>& arr) {
        long long max=LLONG_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max) max=arr[i];
        }
        long long smax=LLONG_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>smax && arr[i]<max) smax=arr[i];
        }
        long long tmax=LLONG_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>tmax && arr[i]<max && arr[i]<smax) tmax=arr[i];
        }
        if(tmax==LLONG_MIN) return max;
        return tmax;
    }
};