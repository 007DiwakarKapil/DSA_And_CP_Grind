// Problem: Container With Most Water
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/container-with-most-water/
// Solved on: 2026-10-05T15:09:23.150Z

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_water=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int area=(j-i)*min(height[i],height[j]);
            max_water=max(max_water,area);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return max_water;
    }
};