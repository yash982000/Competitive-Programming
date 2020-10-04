#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod (ll)1000000000+7
#define fast std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
int main()
{
	fast;
	int t;
	cin>>t;
	while(t--)
	{
		string s1="OBEY\n";
		string s2="REBEL\n";
		ll r,b,k;
		cin>>r>>b>>k;
		int i;
		if(r>b)
			swap(r,b);
		else if(r==b)
		{
			cout<<s1;
			continue;
		}
		ll g =__gcd(r,b);
		ll a=(b-g-1)/r+1;
		if(a<k)
			cout<<s1;
		else 
			cout<<s2;
		
	}
}

