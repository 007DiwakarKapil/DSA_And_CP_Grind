// Problem: Shift 2D Grid
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/shift-2d-grid/
// Solved on: 2026-11-10T16:11:33.723Z

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        k = k % (m * n);
        for (int l = 0; l < k; l++) {
            int temp = grid[m - 1][n - 1];
            for (int i = m - 1; i >= 0; i--) {
                for (int j = n - 1; j >= 0; j--) {
                    if (j == 0 && i > 0) {
                        grid[i][j] = grid[i - 1][n - 1];
                    } else if (j > 0) {
                        grid[i][j] = grid[i][j - 1];
                    }
                }
            }
            grid[0][0] = temp;
        }
        return grid;
    }
};
