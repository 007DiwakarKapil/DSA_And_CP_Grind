// Problem: Move Zeroes
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/move-zeroes/
// Solved on: 2026-11-09T11:21:33.123Z

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]==0) swap(nums[j],nums[j+1]);
            }
        }
    }
};