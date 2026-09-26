// Problem: Search a 2D Matrix II
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Solved on: 2026-09-26T19:09:15.821Z

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag = false;
        int m = size(matrix);
        int n = size(matrix[0]);
        int i = 0, j = n - 1;
        while (i < m && j >= 0) {
            if (matrix[i][j] > target)
                j--;
            else if (matrix[i][j] < target)
                i++;
            else
                return true;
        }
        return false;
    }
};