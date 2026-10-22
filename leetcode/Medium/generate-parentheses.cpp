// Problem: Generate Parentheses
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/generate-parentheses/
// Solved on: 2026-10-22T17:32:08.237Z

class Solution {
public:
void generate(string s,int opening,int closing, int n, vector<string>& ans){
    if(closing==n){
        ans.push_back(s);
        return;
    }
    if(opening < n) generate(s+"(",opening+1,closing,n,ans);
    if(closing<opening)generate(s+")",opening,closing+1,n,ans);
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("",0,0,n,ans);
        return ans;
    }
};