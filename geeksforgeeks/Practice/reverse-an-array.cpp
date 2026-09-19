// Problem: Reverse Array
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/reverse-an-array/1
// Solved on: 2026-09-19T20:39:04.387Z

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n=arr.size();
        for(int i=0;i<n/2;i++){
            int temp= arr[i];
            arr[i]= arr[n-1-i];
            arr[n-1-i]= temp;
        }
    }
};