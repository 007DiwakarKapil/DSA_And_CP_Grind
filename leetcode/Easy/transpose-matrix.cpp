// Problem: Transpose Matrix
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/transpose-matrix/
// Solved on: 2026-09-24T19:49:23.774Z

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r= matrix.size();
        int c= matrix[0].size();
       vector<vector<int>> result(c, vector<int>(r, 0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               result[j][i]=matrix[i][j];
            }
        }
        return result;
    }
};