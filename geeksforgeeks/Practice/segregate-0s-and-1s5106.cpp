// Problem: Segregate 0s and 1s
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
// Solved on: 2026-09-20T09:26:24.721Z

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n= size(arr);
            int zero=0,one=0;
            for(int i=0;i<n;i++){
                if(arr[i]==0) zero++;
                else one++;
            }
           for(int i=0;i<zero;i++){
            arr[i]=0;
           }
           for(int i=zero;i<n;i++){
            arr[i]=1;
           }
    }
};