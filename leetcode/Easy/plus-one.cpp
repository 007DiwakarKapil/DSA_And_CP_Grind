// Problem: Plus One
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/plus-one/
// Solved on: 2026-11-09T07:50:10.856Z

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        digits[0]=digits[0]+1;
        for(int i=0;i<digits.size()-1;i++){
            if(digits[i]>9){
                digits[i]=digits[i]%10;
                digits[i+1]=digits[i+1]+1;
            }
        }
        if(digits[digits.size()-1]>9){
            digits[digits.size()-1]=digits[digits.size()-1]%10;
            digits.push_back(1);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};