// Problem: Multiply 2 Matrices
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/multiply-2-matrices4144/1
// Solved on: 2026-09-26T11:01:37.001Z

class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        vector<vector<int>>mul;
        for(int i=0;i<mat1.size();i++){
            vector<int> row;
            for(int j=0;j<mat2[0].size();j++){
                int a=0;
                for(int k=0;k<mat1[0].size();k++){
                    a=a+mat1[i][k]*mat2[k][j];
                }
                row.push_back(a);
            }
            mul.push_back(row);
        }
        return mul;
    }
};