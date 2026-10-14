// Problem: Title: Finding the Non-Repeating Character in a String ????
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1
// Solved on: 2026-10-14T16:00:33.336Z

class Solution { 
public: 
    char nonRepeatingChar(string &s) { 
        vector<int> v(26, 0); 
        int n = s.size();
        for(int i = 0; i < n; i++){ 
            v[s[i] - 'a']++; 
        }
        for(int i = 0; i < n; i++){ 
            if(v[s[i] - 'a'] == 1) {
                return s[i]; 
            }
        }
        return '$'; 
    } 
};
