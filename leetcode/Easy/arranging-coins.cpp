// Problem: Arranging Coins
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/arranging-coins/
// Solved on: 2026-11-10T15:22:07.625Z

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