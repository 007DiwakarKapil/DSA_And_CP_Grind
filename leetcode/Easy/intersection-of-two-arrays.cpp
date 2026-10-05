// Problem: Intersection of Two Arrays
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/intersection-of-two-arrays/
// Solved on: 2026-10-05T18:10:03.501Z

class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int m=a.size();
        int n=b.size();
        vector<int> c;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i]==b[j]) c.push_back(a[i]);
            }
        }
        sort(c.begin(),c.end());
      c.erase(unique(c.begin(), c.end()), c.end());
        return c;
    }
};