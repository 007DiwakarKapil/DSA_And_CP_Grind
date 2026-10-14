// Problem: Most Frequent Character
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
// Solved on: 2026-10-14T11:02:19.462Z

class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        vector<int> v(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            int x=s[i]-'a';
            v[x]=v[x]+1;
        }
        int max=v[0];
        int max_idx=0;
        for(int i=0;i<26;i++){
            if(v[i]>max){
                max=v[i];
            max_idx=i;
            }
        }
        char y=max_idx+'a';
        return y;
    }
};