// Problem: Sum of Matrix
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/sum-of-elements-in-a-matrix2000/1
// Solved on: 2026-09-24T15:46:57.068Z

class Solution {
  public:
    int sumOfMatrix(vector<vector<int>>& mat) {
        int a=0;
        for(int i=0;i<size(mat);i++){
            for(int j=0;j<size(mat[0]);j++){
                a=a+mat[i][j];
            }
        }
        return a;
    }
};