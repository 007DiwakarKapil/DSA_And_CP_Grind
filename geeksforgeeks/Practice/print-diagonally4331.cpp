// Problem: Easiest Solution 🚀 || Beginner friendly 🫡💪🏻 || C++ & Java
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/print-diagonally4331/1
// Solved on: 2026-11-10T16:58:34.730Z

class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        vector<int> ans;
        int n=mat.size();
        for(int s=0;s<2*n-1;s++){
            for(int i=max(0,s-n+1);i<=min(s,n-1);i++){
                ans.push_back(mat[i][s-i]);
            }
        }
        return ans;
    }
};