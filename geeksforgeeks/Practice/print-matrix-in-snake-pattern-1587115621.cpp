// Problem: 
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1
// Solved on: 2026-09-24T19:36:46.155Z

class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        vector <int> c;
        for(int i=0;i<size(matrix);i++){
            for(int j=0;j<size(matrix[0]);j++){
                if(i%2==0) c.push_back(matrix[i][j]);
                else c.push_back(matrix[i][size(matrix[0])-1-j]);
            }
        }
        return c;
    }
};