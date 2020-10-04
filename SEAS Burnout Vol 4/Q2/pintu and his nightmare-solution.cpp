#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

ll fact(int n){
    ll f=1;
    for(int i=1; i<=n; i++){
        f *= i;
        f %= 1000000007;
    }
    return f;
}
int main(){
    ll farr[100001];
    farr[0] = 1;
    farr[1] = 1;
    for(int i=2; i<=100000; i++){
        farr[i-1] %= 1000000007;
        farr[i] = i * farr[i-1];
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(farr[n+1] - 1)<<"\n";
    }
}

