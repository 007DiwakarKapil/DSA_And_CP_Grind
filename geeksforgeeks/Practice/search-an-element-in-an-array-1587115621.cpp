// Problem: Array Search
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
// Solved on: 2026-09-19T20:44:28.218Z

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for(int i=0;i<size(arr);i++){
            if(x==arr[i]){
                return i;
            }
        }
        return -1;
    }
};