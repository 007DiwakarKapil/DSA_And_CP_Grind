// Problem: Forgotten Episode
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-10-15T18:56:31.361Z

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    long long sum=0;
    long long SUM=n*(n+1)/2;
    for(int j=0;j<n-1;j++){
        sum=sum+arr[j];
    }
    cout<<SUM-sum;
}
