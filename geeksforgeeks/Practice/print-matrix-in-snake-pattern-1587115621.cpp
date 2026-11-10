// Problem: 
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1
// Solved on: 2026-11-10T14:31:51.076Z

class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        vector<int> v;
        for(int i=0;i<matrix.size();i++){
            if(i%2!=0){
                reverse(matrix[i].begin(),matrix[i].end());
            }
            for(int j=0;j<matrix[i].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        return v;
    }
};