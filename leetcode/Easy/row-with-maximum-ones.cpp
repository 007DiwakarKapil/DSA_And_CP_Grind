// Problem: Row With Maximum Ones
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/row-with-maximum-ones/
// Solved on: 2026-11-09T15:56:52.374Z

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count=0;
        int max_count=0;
        int idx=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1) count++;
            }
            if(count>max_count){
                idx=i;
                max_count=count;
            }
            count=0;
        }
        return {idx,max_count};
    }
};