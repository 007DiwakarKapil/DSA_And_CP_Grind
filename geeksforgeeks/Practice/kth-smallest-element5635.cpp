// Problem: Kth Smallest
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
// Solved on: 2026-10-04T07:19:11.070Z

class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int a=arr[k-1];
        return a;
    }
};