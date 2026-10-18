// Problem: Pow(x, n)
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/powx-n/
// Solved on: 2026-10-18T10:41:10.590Z

class Solution {
public:
    double myPow(double x, long n) {
        if (n == 0) return 1;
        if (n < 0) return 1 / myPow(x, -n);
        if (n % 2 == 1) return x * myPow(x, n - 1);
        return myPow(x * x, n / 2);
    }
};