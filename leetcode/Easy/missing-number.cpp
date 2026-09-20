// Problem: Missing Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/missing-number/
// Solved on: 2026-09-20T11:22:16.465Z

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        int s=n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            a=a+nums[i];
        }
        if(a<s){
            int b=s-a;
            return b;
        }
        else if(a==s){
            return 0;
            }
             return 0;
    }
};