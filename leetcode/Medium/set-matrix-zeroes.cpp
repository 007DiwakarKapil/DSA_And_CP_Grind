// Problem: Set Matrix Zeroes
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/set-matrix-zeroes/
// Solved on: 2026-09-27T08:36:47.263Z

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<bool> row(m, false);
        vector<bool> column(n, false);
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    row[i] = true;  
                    column[j] = true;
                }
            }
        }
        
        for(int i = 0; i < m; i++){
            if(row[i] == true){
                for(int j = 0; j < n; j++){
                    matrix[i][j] = 0;
                }
            }
        }
        
        for(int j = 0; j < n; j++){
            if(column[j] == true){
                for(int i = 0; i < m; i++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};