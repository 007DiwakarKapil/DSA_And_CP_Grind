// Problem: Boats to Save People
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/boats-to-save-people/
// Solved on: 2026-10-04T13:53:29.757Z

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int i = 0, j = n - 1, sum = 0;
        while (i <= j) {
            if (i<j && people[i] + people[j] <= limit) {
                i++;
                j--;
            }
            else{
                j--;
            }
            sum++;
        }
        return sum;
    }
};