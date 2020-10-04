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
int i,j,k;
int main()
{
	input
	{
		int n,q;
		cin>>n>>q;
		ll cnt=0;
		f(i,0,q)
		{
			int f,d,d_prev;
			cin>>f>>d;
			if(i==0)
			{
				cnt+=abs(f-cnt);
				d_prev = d;
			}
			else
			{
				cnt+=abs(f-d_prev);
			}
			cnt+=abs(f-d);
			d_prev= d;
			//cout<<cnt<<" ";
		}
		cout<<cnt<<endl;
	}

}

