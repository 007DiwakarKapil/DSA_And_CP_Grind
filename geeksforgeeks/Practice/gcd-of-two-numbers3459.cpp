// Problem: GCD of Two
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
// Solved on: 2026-10-18T15:50:17.008Z

class Solution {
  public:
    int gcd(int a, int b) {
        if(b==0) return a;
        return gcd(b,a%b);
    }
};
