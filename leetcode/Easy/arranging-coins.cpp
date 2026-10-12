// Problem: Arranging Coins
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/arranging-coins/
// Solved on: 2026-10-12T19:28:01.461Z

class Solution {
public:
    int arrangeCoins(int n) {
        int k=0;
        for(int i=n;i>=0;i=i-k){
            k++;
        }
        return k-1;
    }
};