// Problem: Maximum Count of Positive Integer and Negative Integer
// Platform: leetcode
// Rating/Difficulty: Unrated
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
// Solved on: 2026-11-11T16:15:41.844Z

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) p++;
            else if(nums[i]<0) n++;
        }
        return max(n,p);
    }
};