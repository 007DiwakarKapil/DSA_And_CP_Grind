// Problem: 75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 35/75)
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/wave-array-1587115621/1
// Solved on: 2026-09-20T12:31:25.121Z

class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i=i+2){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
};