// Problem: Search Insert Position
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/search-insert-position/
// Solved on: 2026-10-06T20:36:07.847Z

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>target) hi=mid-1;
            else if(nums[mid]<target) lo=mid+1;
            else return mid;
        }
        return lo;
    }
};