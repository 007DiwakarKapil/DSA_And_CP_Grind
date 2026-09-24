// Problem: Row Sum in a Matrix
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/row-sum-in-a-matrix/1
// Solved on: 2026-09-24T17:09:05.267Z

class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        int a=0;
            vector <int> arr;
                for(int i=0;i<size(mat);i++){
                    for(int j=0;j<size(mat[0]);j++){
                        a=a+mat[i][j];
                    }
                    arr.push_back(a);
                    a=0;
                }
                return arr;
    }
};
