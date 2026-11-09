// Problem: Rotate Array
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/rotate-array/
// Solved on: 2026-11-09T06:44:02.177Z

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        if (n <= 1) return; 
        k = k % n;
        if (k < 0) k += n;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
    }
};