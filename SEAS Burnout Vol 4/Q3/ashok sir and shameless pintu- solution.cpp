#include <bits/stdc++.h>
using namespace std;
#define MAXI INT_MAX
#define MINI INT_MIN
#define MAXLL __LONG_LONG_MAX__;
#define MINLL (-MAXLL-1);
#define MAX 100000
#define ll long long
#define ld long double
#define modulo 1000000007
#define modAdd(a,b) (a%modulo + b%modulo)%modulo
#define modSub(a,b) (a%modulo - b%modulo + modulo)%modulo
#define pub push_back
#define pob pop_back
#define mp make_pair
#define lin(t) long long t; cin >> t;
#define din(t) long double t; cin >> t;
#define speedUp() ios::sync_with_stdio(0); cin.tie(0);
const ll fastPow(ll x, ll y) {ll res=1;x=x%modulo;
    while(y>0){if(y&1)res=(res*x)%modulo;y=y>>1;x=(x*x)%modulo;}return res; 
}


int main() {
    speedUp();
    lin(t);
    while(t--){
        lin(n); lin(k); ll mx;
        ll tmp = n/k;
        mx = k*tmp-1;
        if(n%k==k-1){
            mx = n;
        }
        cout << k + mx << endl;
    }    
}
