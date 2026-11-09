// Problem: Segregate 0s and 1s
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
// Solved on: 2026-11-09T03:02:31.663Z

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int left=0,right=arr.size()-1;
        while(left<right){
            while(arr[left]==0 && left<right) left++;
            while(arr[right]==1 && left<right) right--;
            if(left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
    }
};