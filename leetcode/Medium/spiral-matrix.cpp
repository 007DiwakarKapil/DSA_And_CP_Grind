// Problem: Spiral Matrix
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/spiral-matrix/
// Solved on: 2026-09-27T05:54:04.309Z

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size(),n=matrix[0].size();
        int minr=0,maxr=m-1,minc=0,maxc=n-1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                ans.push_back(matrix[minr][j]);
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                ans.push_back(matrix[i][maxc]);
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                ans.push_back(matrix[maxr][j]);
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                ans.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return ans;
    }
};