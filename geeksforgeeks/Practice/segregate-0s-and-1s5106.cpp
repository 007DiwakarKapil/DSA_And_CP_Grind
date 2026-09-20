// Problem: Segregate 0s and 1s
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
// Solved on: 2026-09-20T10:38:53.195Z

class Solution { 
public: 
    void segregate0and1(vector<int> &arr) { 
        int i = 0, j = arr.size() - 1; 

        while (i < j) { 
            if (arr[i] == 0) { 
                i++;
            } 
            else if (arr[j] == 1) { 
                j--;
            } 
            else { 
                swap(arr[i], arr[j]); 
                i++; 
                j--; 
            } 
        } 
    } 
};
