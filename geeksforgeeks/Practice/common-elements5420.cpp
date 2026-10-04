// Problem: Common Elements
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/common-elements5420/1
// Solved on: 2026-10-04T12:50:34.228Z

class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        vector<int> c;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int m=a.size();
        int n=b.size();
        int i=0,j=0;
        while(i<m && j<n){
            if(a[i]==b[j]){
                c.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else j++;
        }
        return c;
    }
};