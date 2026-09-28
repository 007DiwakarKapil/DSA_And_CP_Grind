// Problem: Bubble Sort
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/bubble-sort/1
// Solved on: 2026-09-28T17:56:41.737Z

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n=arr.size();
        for(int j=0;j<n-1;j++){
            for(int i=0;i<n-1-j;i++){
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
            }
        }
    }
};