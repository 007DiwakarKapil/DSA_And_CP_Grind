// Problem: Toggle Case
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/toggle-case/1
// Solved on: 2026-10-13T14:00:55.746Z

class Solution {
  public:
    string toggleCase(string &s) {
        int n=s.length();
        for(int i=0;i<n;i++){
            int ascii=s[i];
            if(ascii>64 && ascii<91) s[i]=s[i]+32;
            else if(ascii>96 && ascii<123) s[i]=s[i]-32;
        }
        return s;
    }
};