// Problem: Array Search
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
// Solved on: 2026-11-08T13:50:43.086Z

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x) return i;
        }
        return -1;
    }
};