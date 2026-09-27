// Problem: Set Matrix Zeroes
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/set-matrix-zeroes/
// Solved on: 2026-09-27T08:01:29.144Z

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> ans=matrix;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<m;k++){
                        ans[k][j]=0;
                    }
                    for(int l=0;l<n;l++){
                        ans[i][l]=0;
                    }
                }
            }
        }
        matrix=ans;
    }
};