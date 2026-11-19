// Problem: Missing in AP
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/missing-element-of-ap2228/1
// Solved on: 2026-11-19T17:27:10.283Z

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1;
        long long d;
        if (n == 2) {
            d = (long long)arr[1] - arr[0];
        } else {
            long long d1 = (long long)arr[1] - arr[0];
            long long d2 = (long long)arr[n - 1] - arr[n - 2];
            d = (abs(d1) < abs(d2)) ? d1 : d2;
        }
        if (arr[n - 1] == arr[0] + (long long)(n - 1) * d) {
            return arr[n - 1] + d;
        }
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            long long expected = arr[0] + (long long)mid * d;
            if (arr[mid] == expected) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return arr[0] + (long long)lo * d;
    }
};
