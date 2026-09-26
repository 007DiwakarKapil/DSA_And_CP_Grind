// Problem: Pascal's Triangle
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/pascals-triangle/
// Solved on: 2026-09-26T07:15:33.328Z

class Solution {
public:
__int128 fact(int x){
            __int128 a=1;
            for(int i=1;i<=x;i++){
                a=a*i;
            }
            return a;
        }
        long long nCr(int n,int r){
           __int128 b= (fact(n))/(fact(r)*fact(n-r));
            return b;
        }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=1;i<=numRows;i++){
            vector<int>w;
            for(int j=0;j<i;j++){
                w.push_back(nCr(i-1,j));
            }
            v.push_back(w);
        }
        return v;
    }
};