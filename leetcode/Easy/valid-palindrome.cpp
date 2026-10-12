// Problem: Valid Palindrome
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/valid-palindrome/
// Solved on: 2026-10-12T19:09:09.615Z

class Solution {
public:
    bool NotValid(char ch){
        if(ch>=65 and ch<=90) return false;
        else if(ch>=97 and ch<=122) return false;
        else if(ch>=48 and ch<=57) return false;
        return true;
    }
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j){
            char x=s[i],y=s[j];
            if(x>=65 and x<=90) x+=32;
            if(y>=65 and y<=90) y+=32;
            if(NotValid(x)) i++;
            else if(NotValid(y)) j--;
            else{
                if(x!=y) return false;
                i++;
                j--;
            }
        }
        return true;
    }
};