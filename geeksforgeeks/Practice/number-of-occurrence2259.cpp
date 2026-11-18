// Problem: Count Occurrences in Sorted
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
// Solved on: 2026-11-18T17:19:53.920Z

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==target) count++;
        }
        return count;
    }
};
