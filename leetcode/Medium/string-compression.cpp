// Problem: String Compression
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/string-compression/
// Solved on: 2026-10-14T17:55:16.581Z

class Solution {
public:
    int compress(vector<char>& s) {
        vector<char> ans;
        int i = 0, j = 0;
        int n = s.size();

        while (j < n) {
            if (s[j] == s[i]) {
                j++;
            } else {
                int len = j - i;
                ans.push_back(s[i]);
                if (len > 1) {
                    string lenStr = to_string(len);
                    for (char ch : lenStr) {
                        ans.push_back(ch);
                    }
                }
                i = j;
            }
        }
        int len = j - i;
        ans.push_back(s[i]);
        if (len > 1) {
            string lenStr = to_string(len);
            for (char ch : lenStr) {
                ans.push_back(ch);
            }
        }
        s = ans;
        return s.size();
    }
};
