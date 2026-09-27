// Problem: Spiral Matrix II
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/spiral-matrix-ii/
// Solved on: 2026-09-27T09:30:26.018Z

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) { 
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int val = 1;
        int minr = 0, maxr = n - 1;
        int minc = 0, maxc = n - 1;
        
        while (minr <= maxr && minc <= maxc) {
            for (int j = minc; j <= maxc; j++) {
                matrix[minr][j] = val++;
            }
            minr++;
            
            for (int i = minr; i <= maxr; i++) {
                matrix[i][maxc] = val++;
            }
            maxc--;
            
            if (minr <= maxr) {
                for (int j = maxc; j >= minc; j--) {
                    matrix[maxr][j] = val++;
                }
                maxr--;
            }
            
            if (minc <= maxc) {
                for (int i = maxr; i >= minr; i--) {
                    matrix[i][minc] = val++;
                }
                minc++;
            }
        }
        return matrix;
    }
};