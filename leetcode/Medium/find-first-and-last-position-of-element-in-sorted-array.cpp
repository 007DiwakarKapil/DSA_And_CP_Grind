// Problem: Find First and Last Position of Element in Sorted Array
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Solved on: 2026-10-06T19:43:31.212Z

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        vector<int> ans(2,-1);
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>target) hi=mid-1;
            else if(nums[mid]<target) lo=mid+1;
            else{
                ans[0]=mid;
                hi=mid-1;
            }
        }
        lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>target) hi=mid-1;
            else if(nums[mid]<target) lo=mid+1;
            else{
                ans[1]=mid;
                lo=mid+1;
            }
        }
        return ans;
    }
};