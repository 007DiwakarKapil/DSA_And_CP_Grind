// Problem: Union of 2 Sorted Arrays
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
// Solved on: 2026-10-05T15:49:44.703Z

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int m=a.size();
        int n=b.size();
        vector<int> c;
        vector<int> d;
        for(int i=0;i<m+n;i++){
            if(i<m) c.push_back(a[i]);
            else c.push_back(b[i-m]);
        }
        sort(c.begin(),c.end());
        for(int i=0;i<m+n;i++){
            if(c[i]<c[i+1] || i==m+n-1) d.push_back(c[i]);
            else{
                continue;
            }
        }
        return d;
    }
};