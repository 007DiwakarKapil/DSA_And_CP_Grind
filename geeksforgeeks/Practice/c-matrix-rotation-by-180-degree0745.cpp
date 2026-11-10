// Problem: Rotate a Matrix by 180 Counterclockwise
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1
// Solved on: 2026-11-10T16:44:35.269Z

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        reverse(mat.begin(),mat.end());
        for(int i=0;i<mat.size();i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
};