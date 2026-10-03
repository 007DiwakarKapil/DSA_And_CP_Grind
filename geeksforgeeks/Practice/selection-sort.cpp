// Problem: Selection Sort
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/selection-sort/1
// Solved on: 2026-10-03T15:13:32.769Z

class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n=arr.size();
           for(int i=0;i<n-1;i++){
               int min=arr[i],min_idx=i;
               for(int j=i;j<n;j++){
                   if(arr[j]<min){
                       min=arr[j];
                       min_idx=j;
                   }
               }
               swap(arr[i],arr[min_idx]);
           }
    }
};