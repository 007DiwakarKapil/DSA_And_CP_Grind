// Problem: First Unique Character in a String
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/first-unique-character-in-a-string/
// Solved on: 2026-10-14T16:01:54.386Z

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26, 0); 
        int n = s.size();
        for(int i = 0; i < n; i++){ 
            v[s[i] - 'a']++; 
        }
        for(int i = 0; i < n; i++){ 
            if(v[s[i] - 'a'] == 1) {
                return i; 
            }
        }
        return -1; 
    }
};