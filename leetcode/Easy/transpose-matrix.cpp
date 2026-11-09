// Problem: Transpose Matrix
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/transpose-matrix/
// Solved on: 2026-11-09T14:03:04.509Z

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();
        vector<vector<int>> result(column, vector<int>(row, 0));
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                result[j][i]=matrix[i][j];
            }
        }
        return result;
    }
};