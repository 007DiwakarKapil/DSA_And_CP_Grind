// Problem: Matrix Diagonal Sum
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/matrix-diagonal-sum/
// Solved on: 2026-11-11T12:48:07.571Z

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            sum=sum+mat[i][i]+mat[i][n-1-i];
        }
        if(n%2==1) sum=sum-mat[n/2][n/2];
        return sum;
    }
};