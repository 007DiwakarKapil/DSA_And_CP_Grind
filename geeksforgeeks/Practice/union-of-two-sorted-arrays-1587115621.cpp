// Problem: Union of 2 Sorted Arrays
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
// Solved on: 2026-10-04T14:34:50.335Z

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int m=a.size(),n=b.size();
        vector<int>c(m+n);
            for(int i=0;i<m+n;i++){
                if(i<m) c[i]=a[i];
                else c[i]=b[i-m];
            }
            sort(c.begin(),c.end());
            c.erase(unique(c.begin(), c.end()), c.end());
        return c;
    }
};