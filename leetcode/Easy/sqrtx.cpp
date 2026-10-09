// Problem: Sqrt(x)
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/sqrtx/
// Solved on: 2026-10-09T17:07:16.094Z

class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        else{int lo=1,hi=x;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid>x/mid) hi=mid-1;
            else if(mid<x/mid) lo=mid+1;
            else return mid;
        }
        return hi;
        }
        return 0;
    }
};