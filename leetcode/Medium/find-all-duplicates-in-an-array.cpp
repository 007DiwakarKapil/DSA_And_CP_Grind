// Problem: Find All Duplicates in an Array
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-all-duplicates-in-an-array/
// Solved on: 2026-11-13T16:45:56.577Z

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                v.push_back(nums[i]);
                continue;
        }
        }
        return v;
    }
};