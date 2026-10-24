// Problem: Reverse Pairs
// Platform: leetcode
// Rating/Difficulty: Hard
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/reverse-pairs/
// Solved on: 2026-10-24T14:03:50.657Z

class Solution {
public:
    int count;

    void merge(vector<int>& a, vector<int>& b, vector<int>& c) {
        int i = 0, j = 0, k = 0;
        
       
        while (i < a.size() && j < b.size()) {
            if ((long long)a[i] > 2 * (long long)b[j]) {
                count += (a.size() - i);
                j++; 
            } else {
                i++; 
            }
        }

        
        i = 0; j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                c[k++] = a[i++];
            } else {
                c[k++] = b[j++];
            }
        }
        
        while (i < a.size()) c[k++] = a[i++];
        while (j < b.size()) c[k++] = b[j++];
    }

    void mergeSort(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return;
        
        vector<int> a(n / 2);
        vector<int> b(n - n / 2);
        int idx = 0;
        
        for (int i = 0; i < n / 2; i++) {
            a[i] = arr[idx++];
        }
        for (int i = 0; i < n - n / 2; i++) {
            b[i] = arr[idx++];
        }
        
        mergeSort(a);
        mergeSort(b);
        merge(a, b, arr);
    }

    int reversePairs(vector<int>& nums) {
        count = 0;
        mergeSort(nums);
        return count;
    }
};
