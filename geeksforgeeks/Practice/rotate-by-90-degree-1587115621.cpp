// Problem: Rotate by 90 degree
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
// Solved on: 2026-11-10T15:11:16.200Z

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<i;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
            reverse(mat.begin(),mat.end());
    }
};
