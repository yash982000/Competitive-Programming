#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod (ll)1000000000+7
#define fast std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define input int t;cin>>t;while(t--)
int main()
{
	input
	{
		int n;
		cin>>n;
		int i;
		ll a[n];
		ll sum=0;
		ll x;
		for(i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(i==0)
				x=a[0];
			else
			{
				x=x^a[i];
			}
		}
		if(sum==x*2)
		{
			cout<<"0\n\n";
		}
		else
		{
			if(sum%2==1)
			{
				ll temp=sum;
				ll temp1=x;
				ll cnt=1;
				while(cnt<=100000)
				{
					temp=sum;
					temp1=x;
					temp+=cnt;
					temp1=temp1^cnt;
					if(temp==temp1*2)
					{
						cout<<"1\n";
						cout<<cnt<<"\n";
						break;
					}
					else
						cnt=cnt+4;
				}
			}
			if(sum%2==0)
			{
				ll temp=sum;
				ll temp1=x;
				ll cnt=2;
				while(cnt<=100000)
				{
					temp=sum;
					temp1=x;
					temp+=cnt;
					temp1=temp1^cnt;
					if(temp==temp1*2)
					{
						cout<<"1\n";
						cout<<cnt<<"\n";
						break;
					}
					else
						cnt=cnt+4;
				}
			}
		}
	}
}

