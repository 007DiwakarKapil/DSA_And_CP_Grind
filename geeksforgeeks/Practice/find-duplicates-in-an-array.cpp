// Problem: 75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 31/75)
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
// Solved on: 2026-11-16T13:55:37.139Z

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>v;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]) v.push_back(arr[i]);
        }
        return v;
    }
};