// Problem: Find Smallest Letter Greater Than Target
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
// Solved on: 2026-11-19T15:26:43.542Z

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        int lo = 0, hi = letters.size() - 1;
        
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (letters[mid] > target) {
                ans = letters[mid];
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        
        return ans;
    }
};
