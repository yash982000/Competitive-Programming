#include<stdio.h>
#include<math.h>

int main()
{
	long long int number=1378;
	int N;
    int multiply=1;
	scanf("%d",&N);
//	int j=N;
	while(N>0)
	{
		multiply=multiply*number;
		
		N=N-1;
	}
	int rem=multiply%10;
	
	printf("%d",rem);
	return 0;
}


