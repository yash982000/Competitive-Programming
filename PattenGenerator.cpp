#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	
/*
PATTERN CREATOR:
input: 7
output:
7777777
7666667
7655567
7654567
7655567
7666667
7777777
*/
	int n,i,j;
	cin>>n;
	//will go till half (if odd then half+1)
	for(i=0;i<=ceil(n/2);i++)
	{
		int k=n;
		//count for number of times we need to decrease in a perticular row
		//flag for: once started to increament value in row, not to decreament it again
		int count=0,flag=0;
		for(j=0;j<n;j++)
		{
			cout<<k;
			//decreasing value
			if(count<i && flag==0)
			{
				count++;
				k--;
			}
			// time to increase the value
			if(j!=0 && j-i>=0 && j>=n-1-i )
			{
				k++;
				flag=1;
			}
		}
		cout<<endl;
	}
	
	//to repeat the above procedure in reverse
	for(i=(n-2-ceil(n/2));i>=0;i--)
	{
		int k=n;
		int count=0,flag=0;
		for(j=0;j<n;j++)
		{
			cout<<k;
			
			if(count<i && flag==0)
			{
				count++;
				k--;
			}
			if(j!=0 && j-i>=0 && j>=n-1-i )
			{
				k++;
				flag=1;
				count--;
			}
		}
		cout<<endl;
	}
	return 0;
}

