// Problem: 75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 35/75)
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/wave-array-1587115621/1
// Solved on: 2026-11-09T03:10:24.726Z

class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        if(arr.size()%2==0){
       for(int i=0;i<arr.size();i+=2){
           swap(arr[i],arr[i+1]);
       }
        }
        else if(arr.size()%2!=0){
             for(int i=0;i<arr.size()-1;i+=2){
           swap(arr[i],arr[i+1]);
       }
        }
    }
};