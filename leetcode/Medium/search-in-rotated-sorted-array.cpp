// Problem: Search in Rotated Sorted Array
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Solved on: 2026-10-10T19:07:25.924Z

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
           if(nums[lo]<=nums[mid]){
            if(nums[lo]<=target && target<nums[mid]) hi=mid-1;
            else lo=mid+1;
           }
            else{
                if(nums[mid]<target && target<=nums[hi]) lo=mid+1;
                else hi=mid-1;
            }
        }
        return -1;
    }
};