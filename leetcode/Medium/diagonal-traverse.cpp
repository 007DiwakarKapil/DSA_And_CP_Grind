// Problem: Diagonal Traverse
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/diagonal-traverse/
// Solved on: 2026-11-16T19:54:56.241Z

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};
        int m = mat.size();
        int n = mat[0].size();
        vector<int> result;
        result.reserve(m * n);
        for (int d = 0; d < m + n - 1; ++d) {
            if (d % 2 == 0) {
                int row = min(d, m - 1);
                int col = d - row;
                while (row >= 0 && col < n) {
                    result.push_back(mat[row][col]);
                    row--;
                    col++;
                }
            } else {
                int col = min(d, n - 1);
                int row = d - col;
                while (col >= 0 && row < m) {
                    result.push_back(mat[row][col]);
                    row++;
                    col--;
                }
            }
        }
        return result;
    }
};