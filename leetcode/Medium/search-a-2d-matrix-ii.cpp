// Problem: Search a 2D Matrix II
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Solved on: 2026-09-26T18:30:11.747Z

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag= false;
        int m=size(matrix);
        int n=size(matrix[0]);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==target){
                    flag=true;
                    break;
                }
            }
        }
        return flag;
    }
};