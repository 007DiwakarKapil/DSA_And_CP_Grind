// Problem: Check Sorted Array
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// Solved on: 2026-09-27T21:29:57.565Z

class Solution { 
public: 
    bool isSorted(vector<int>& arr) { 
        if (arr.size() <= 1) return true; 
        for (int i = 0; i < arr.size() - 1; i++) { 
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        } 
        return true;
    } 
};