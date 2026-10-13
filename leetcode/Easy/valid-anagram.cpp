// Problem: Valid Anagram
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/valid-anagram/
// Solved on: 2026-10-13T14:20:44.257Z

class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.length(),n=t.length();
        if(m!=n) return false;
        else{
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i=0;i<m;i++){
                if(s[i]!=t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};