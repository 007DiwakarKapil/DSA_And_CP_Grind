// Problem: Floor in Sorted Array
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
// Solved on: 2026-10-09T15:48:12.219Z

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
       int lo=0,hi=arr.size()-1,a=-1;
       while(lo<=hi){
           int mid=lo+(hi-lo)/2;
           if(arr[mid]<=x){
               a=mid;
               lo=mid+1;
           }
           else hi=mid-1;
       }
       return a;
    }
};
