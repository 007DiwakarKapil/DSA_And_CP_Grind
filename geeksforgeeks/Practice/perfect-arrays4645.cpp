// Problem: Palindrome Array
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/perfect-arrays4645/1
// Solved on: 2026-11-09T13:03:31.310Z

class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        int left=0;
        int right=arr.size()-1;
        while(left<right){
            if(arr[left]!=arr[right]) return false;
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};
