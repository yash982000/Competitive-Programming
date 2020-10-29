#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            return false;
            break;
        }
  }
  return true;
}
ll kfactors(int n){
    int j=0;
    while (n%2 == 0)
    {
        n/=2;
        j++;
    }
    for (int i=3; i<=sqrt(n); i=i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            j++;
        }
    }
    if(n>2){ j++; }
    return j;
}
int main()
{
    ll x,k,t;
    cin>>t;
    while(t--){
        cin>>x>>k;
        if(x==1){ cout<<0<<"\n";}
        else if(k==1){
                cout<<1<<"\n";
        }
        else if(k==2){
            if(!isPrime(x)){
                cout<<1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        else{
            if(kfactors(x)>=k){
                cout<<1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
    }
    return 0;
}
