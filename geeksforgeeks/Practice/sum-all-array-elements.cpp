// Problem: Sum of Array
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/sum-all-array-elements/1
// Solved on: 2026-09-19T20:47:42.964Z

class Solution {
  public:
    int arraySum(vector<int>& arr) {
        int a=0;
        for(int i=0;i<size(arr);i++){
            a=a+arr[i];
        }
        return a;
    }
};