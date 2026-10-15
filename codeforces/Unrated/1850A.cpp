// Problem: To My Critics
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-10-15T18:41:22.388Z

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>=10 || b+c>=10 || a+c>=10){
            cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
}
