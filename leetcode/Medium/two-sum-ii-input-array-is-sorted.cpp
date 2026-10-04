// Problem: Two Sum II - Input Array Is Sorted
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Solved on: 2026-10-04T12:27:57.409Z

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int n=numbers.size();
        int i=0,j=n-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};