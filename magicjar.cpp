#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int t,n,j;
	cin>>t;
	long long int sum=0;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		int a[n];
		for(j=0; j<n; j++)
		{
			cin>>a[j];
			sum=sum+a[j];
		}
		sum=sum+1-n;
		cout<<sum<<"\n";
		sum=0;
	}
	return 0;
}
