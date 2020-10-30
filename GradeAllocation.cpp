//CodeCraft-20 (Div. 2), problem: (A) Grade Allocation
#include <iostream> 
using namespace std;
#define ll long int
int main()
{
    int t;
    cin>>t;
    while(t>0){
        ll n,m,sum=0;
        cin>>n>>m;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>=m){
            cout<<m<<endl;
        }
        else{
            cout<<sum<<endl;
        }
        t--;
    }
    return 0;
}