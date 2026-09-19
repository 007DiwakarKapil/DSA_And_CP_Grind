// Problem: Min and Max in Array
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
// Solved on: 2026-09-19T20:53:46.027Z

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int min_val = arr[0];
        int max_val = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < min_val) {
                min_val = arr[i];
            }
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
        }

        return {min_val, max_val};
    }
};
