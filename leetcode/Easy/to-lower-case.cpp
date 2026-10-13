// Problem: To Lower Case
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/to-lower-case/
// Solved on: 2026-10-13T14:06:28.806Z

class Solution {
public:
    string toLowerCase(string s) {
         int n=s.length();
        for(int i=0;i<n;i++){
            int ascii=s[i];
            if(ascii>64 && ascii<91) s[i]=s[i]+32;
        }
        return s;
    }
};