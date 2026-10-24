// Problem: Count Inversions
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
// Solved on: 2026-10-24T13:57:12.301Z

class Solution {
  public:
  int count;
  void merge(vector<int>& a, vector<int>& b, vector<int>& c){
      int i = 0, j = 0, k = 0;
      while(i < a.size() && j < b.size()){
          if(a[i] > b[j]){
              c[k++] = b[j++];
              count+=(a.size()-i);
          }
          else c[k++] = a[i++];
      }
      while(i < a.size()) c[k++] = a[i++];
      while(j < b.size()) c[k++] = b[j++];
  }

  void mergeSort(vector<int>& arr){
      int n = arr.size();
      if(n==1) return;
      vector<int> a(n/2);
      vector<int> b(n-n/2);
      int idx = 0;
      for(int i=0;i<n/2;i++){
          a[i] = arr[idx++];
      }
      for(int i=0;i<n-n/2;i++){
          b[i] = arr[idx++];
      }
      mergeSort(a);
      mergeSort(b);
      merge(a,b,arr);
  }
    int inversionCount(vector<int> &arr) {
        count=0;
        mergeSort(arr);
        return count;
    }
};