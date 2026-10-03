// Problem: Move Zeroes
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/move-zeroes/
// Solved on: 2026-10-03T04:01:00.062Z

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        for(int j=0;j<n-1;j++){
            for(int i=0;i<n-1;i++){
                if(arr[i]==0){
                    swap(arr[i],arr[i+1]);
                }
            }
        }
    }
};