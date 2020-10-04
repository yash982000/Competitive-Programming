#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,j;
	char ch;
	string a,b;
	cin>>a;
	cin>>b;
	int x[4],y[4];
	x[0]=a[0]-48;
	x[1]=a[1]-48;
	x[2]=a[3]-48;
	x[3]=a[4]-48;
	y[0]=b[0]-48;
	y[1]=b[1]-48;
	y[2]=b[3]-48;
	y[3]=b[4]-48;
	
	int k,l,m;
	k=(x[0]*10+x[1])*60+(x[2]*10+x[3]);
	l=(y[0]*10+y[1])*60+(y[2]*10+y[3]);
	m=k+(l-k)/2;
	int ans[4];
	int temp=(x[0]*10 + x[1])+(y[0]*10+y[1]-x[0]*10 - x[1])/2;
	 ans[1]=temp%10;
	 ans[0]=(temp/10)%10;
	int q=m-temp*60;
	ans[2]=q%10;
	ans[3]=(q/10)%10;
	if(ans[3]>=6 && ans[2]>=0)
	{
		int temp2=ans[3]/6;
		ans[1]=(ans[1]+temp2)%10;
		ans[0]=ans[0]+(temp%10+temp2)/10;
		ans[3]=ans[3]-6*temp2;
		ans[2]=ans[2];
	}
	cout<<ans[0]<<ans[1]<<":"<<ans[3]<<ans[2];
}
