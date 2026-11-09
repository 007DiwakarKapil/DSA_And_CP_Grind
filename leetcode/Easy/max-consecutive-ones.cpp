// Problem: Max Consecutive Ones
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/max-consecutive-ones/
// Solved on: 2026-11-09T13:19:54.296Z

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> v;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) count++;
            else{
                v.push_back(count);
                count=0;
                continue;
        }
        v.push_back(count);
        }
        int max=0;
        for(int i=0;i<v.size();i++){
            if(max<v[i]) max=v[i];
        }
        return max;
    }
};