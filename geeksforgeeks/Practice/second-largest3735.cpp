// Problem: Second Largest
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/second-largest3735/1
// Solved on: 2026-09-19T20:54:37.840Z

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int largest = -1;
        int secLargest = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                secLargest = largest;
                largest = arr[i];
            } else if (arr[i] < largest && arr[i] > secLargest) {
                secLargest = arr[i];
            }
        }

        return secLargest;
    }
};
