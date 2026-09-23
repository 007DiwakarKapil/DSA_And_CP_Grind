// Problem: Merge Sorted Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/merge-sorted-array/
// Solved on: 2026-09-23T16:32:45.398Z

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> c;
        for(int i=0;i<m;i++){
            c.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            c.push_back(nums2[i]);
        }
        sort(c.begin(),c.end());
        nums1=c;
    }
};