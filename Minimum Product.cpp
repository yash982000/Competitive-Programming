#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod (ll)1000000007
#define fast std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define input int t;cin>>t;while(t--)
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define f(i, a, b) for (int i = (a); i < (b); i++)
#define fr(i, a, b) for (int i = (a); i >= (b); i--)
#define mp make_pair
#define pb push_back
#define fs first
#define sc second
#define all(x) x.begin(), x.end()
#define cins(s) string s; cin>>s;
#define cini(i) int i; cin>>i;
#define cinll(l) ll l; cin>>l;
#define cind(d) double d; cin>>d;
#define PI 3.1415926535897932384626433
int i,j,k;
int main()
{
	input
	{
		cinll(a);
		cinll(b);
		cinll(x);
		cinll(y);
		cinll(n);
		
		if(a>b)
		{
			swap(a,b);
			swap(x,y);
		}
		ll np=n;
		ll bp=b;
		ll ap=a;
		ll ans=1000000000000000000;
		
		ll temp=min(n,b-y);
		b=b-temp;
		n=n-temp;
		temp=min(n,a-x);
		a=a-temp;
		ans=min(ans,a*b);
		
	
		b=bp;
		a=ap;
		n=np;
		
		temp=min(n,a-x);
		a=a-temp;
		n=n-temp;
		temp=min(n,b-y);
		b=b-temp;
		ans=min(ans,a*b);
		
		
		cout<<ans<<"\n";
	}

}

