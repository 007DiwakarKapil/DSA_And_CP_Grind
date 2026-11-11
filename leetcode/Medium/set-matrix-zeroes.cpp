// Problem: Set Matrix Zeroes
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/set-matrix-zeroes/
// Solved on: 2026-11-11T03:45:20.001Z

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans=matrix;
        int row=0,column=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row=i;
                    column=j;
                    for(int k=0;k<m;k++){
                        ans[k][column]=0;
                    }
                        for(int l=0;l<n;l++){
                            ans[row][l]=0;
                        }
                }
            }
        }
        matrix=ans;
    }
};