//YASH  PATEL
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
#include<climits>
#include<math.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define init(arr,val) memset(arr,val,sizeof(arr))
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--)
#define ull unsigned long long int
#define ll long long int
#define pb push_back
#define pf push_front
#define F first
#define S second
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define br "\n"


using namespace std;
using namespace __gnu_pbds;
template <typename T>
 
ll findS(ll s) {
	return (sqrtl(8*s + 1) - 1)/2;
}
bool prime(ll a) {
	if(a==1)return false;
	if(a==2 || a==3)return true;
	if(a%2==0 ||a%3==0)return false;
	for(ll i=5; i<=sqrt(a); i+=6)
		if(a%i==0 || a%(i+2)==0)
			return false;
	return true;
}
ll power(ll x,ll y) {
	if (y == 0)
		return 1;
	ll p = power(x, y/2) % mod;
	p = (p * p) % mod;
 
	return (y%2 == 0)? p : (x * p) % mod;
}
ll nCr(ll n,ll k) {
	ll C[k+1];
	C[0] = 1;
	f(i,0,k+1)C[i]=0;
	for (ll i = 1; i <= n; i++) {
		for (ll j = min(i, k); j > 0; j--)
			C[j] = (C[j] + C[j-1])%mod;
	}
	return C[k];
}
ll LOGN(ll n , ll r) {
	return (n > r-1) ? (1 + LOGN(n / r , r)) : 0 ;
}
void dfs(vector<ll> v[], bool visited[], ll current_node) {
	visited[current_node]=true;
//	for(ll nxt_node : v[current_node]) {
	//	if(visited[nxt_node]==false) {
	//		dfs(v , visited, nxt_node);
		}
	//}
	//return;
//}
void solve() {
	int n;
	cin >> n ;
	string s ;
	cin >> s ;
	for (int i = 0; i < n - 1; i++) {
		if (s[i] > s[i + 1]) {
			s.erase(i, 1);
			break;
		}
	}
	if(s.size() == n){
		s = s.substr(0,n-1);
	}
	cout << s;
}
int main(){
	fast ;
	int P[4],A,B,x;
	cin >> P[0] >> P[1] >> P[2] >> P[3] >> A >> B;
	x=*min_element(P,P+4);
	if(A<x){
		cout << min(B,x-1) - A + 1 << endl;
	}
	else{
		cout << 0 << endl;
	}
	return 0;	
}
