// Problem: Rotate Image
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/rotate-image/
// Solved on: 2026-09-25T02:36:55.236Z

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
              swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
                reverse(matrix[i].begin(),matrix[i].end());
            }
    }
};