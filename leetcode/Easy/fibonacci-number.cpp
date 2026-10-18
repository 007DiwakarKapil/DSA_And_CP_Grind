// Problem: Fibonacci Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/fibonacci-number/
// Solved on: 2026-10-18T16:01:55.430Z

class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        else if(n==1) return 1;
        int ans=fib(n-1)+fib(n-2);
        return ans;
    }
};