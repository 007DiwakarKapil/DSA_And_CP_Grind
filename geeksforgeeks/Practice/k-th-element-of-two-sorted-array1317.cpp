// Problem: K-th of Two Sorted Arrays
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1
// Solved on: 2026-11-19T18:29:05.079Z

class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int i = 0, j = 0, count = 0;
        int n = a.size(), m = b.size();
        while (i < n && j < m) {
            int val;
            if (a[i] < b[j]) {
                val = a[i++];
            } else {
                val = b[j++];
            }
            count++;
            if (count == k) return val;
        }
        while (i < n) {
            count++;
            if (count == k) return a[i];
            i++;
        }
        while (j < m) {
            count++;
            if (count == k) return b[j];
            j++;
        }
        return -1;
    }
};
