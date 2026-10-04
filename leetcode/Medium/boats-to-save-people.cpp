// Problem: Boats to Save People
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/boats-to-save-people/
// Solved on: 2026-10-04T14:12:45.364Z

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int i =0,j=n-1,sum=0;
        while (i<=j){
            if(people[j]>=limit){
                sum++;
                j--;
            }
            else{
                if(people[i]+people[j]<=limit){
                    sum++;
                    i++;
                    j--;
                }
                else{
                    sum++;
                    j--;
                }
            }
        }
        return sum;
    }
};