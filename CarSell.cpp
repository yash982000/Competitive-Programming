#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n;
    const ll m=1000000007;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n],pro=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        for(ll i=0;i<n;i++){
            if(arr[i]>i){
                pro=(pro+arr[i]-i)%m;
            }
            else{ break;}
        }
        cout<<pro<<endl;
    }
    return 0;
}
