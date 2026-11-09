// Problem: Max Consecutive Ones
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/max-consecutive-ones/
// Solved on: 2026-11-09T13:23:10.045Z

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> v;
        int count=0;
        int max_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                max_count = max(max_count, count);
            }
            else{
                
                count=0;
            
        }
       
        }
        
        return max_count;
    }
};