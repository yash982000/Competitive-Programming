#include<stdio.h>
#include<math.h>

int main()
{
	
	int t;
	cin>>t;
	int n=t%4;
	if(t==0) cout<<"1"<<endl;
	else if(n==1) cout<<"8"<<endl;
	else if(n==2) cout<<"4"<<endl;
	else if(n==3) cout<<"2"<<endl;
	else if(n==0) cout<<"6"<<endl;
	
	return 0;
//	long long int number=1378;
//	int N;
//    int multiply=1;
//	scanf("%d",&N);
//	int j=N;
//	while(N>0)
//	{
//		multiply=multiply*number;
//		
//		N=N-1;
//	}
//	int rem=multiply%10;
//	
//	printf("%d",rem);
//	return 0;

}


