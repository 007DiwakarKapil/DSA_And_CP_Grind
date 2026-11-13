// Problem: Equilibrium Point
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
// Solved on: 2026-11-13T16:39:48.527Z

class Solution {
public:
    int findEquilibrium(vector<int> &arr) {
        long long totalSum = accumulate(arr.begin(), arr.end(), 0LL);
        long long leftSum = 0;
        for (int i = 0; i < arr.size(); ++i) {
            totalSum -= arr[i];
            if (leftSum == totalSum) {
                return i;
            }
            leftSum += arr[i];
        }
        return -1;
    }
};