// Problem: Rotate by 90 degree
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
// Solved on: 2026-09-25T12:31:26.583Z

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) { 
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};