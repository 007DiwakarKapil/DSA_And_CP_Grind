// Problem: Kth Smallest
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
// Solved on: 2026-11-11T15:55:30.126Z

class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};