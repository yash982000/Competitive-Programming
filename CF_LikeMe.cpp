#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int binomialCoeff(int n, int k) ;
//this code still gives tle... hence do not use pascles triangle concept... reffer to the submisison
int calcoeff(long long int l,long long int d,long long int s,long long int c)
{
	int i,flag=0;
	long long int ans=0;
	long long int u=d,p;
        // Every line has number of  
        // integers equal to line  
        // number
		if (d==1)
		{
			flag=1;
			ans=s;	
			if(ans>=l)
			{
				cout<<"ALIVE AND KICKING\n";	
			}
			else
			{
				cout<<"DEAD AND ROTTING\n";
			}
		}  
		else if(d>=2)
		   {
		   	ans=ans+ (s*(pow(c,d-1)))+s;
		   		if(ans>=l)
				{
					d=0;
					flag=1;
					cout<<"ALIVE AND KICKING\n";	
				}
				
		   }
        for ( i = 1; i <d-1; i++) 
        
        {
           	p=binomialCoeff(d-1, i);
           	ans=ans+s*(p*pow(c,u-2));
           	if(ans>=l)
			{
				flag=1;
				cout<<"ALIVE AND KICKING\n";
				break;	
			}
           	u--;
           	
           	
		} 
		   
		if(flag!=1)
		{
			cout<<"DEAD AND ROTTING\n";
		 } 
		
		
       return ans; 
    }
    


int binomialCoeff(int n, int k) 
{ 
	int i;
    int res = 1; 
    if (k > n - k) 
    k = n - k; 
    for ( i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
      
    return res; 
} 
//so the concept apart form brute fore is that ihe coefficients follow the pascles triangle pattern!!
int main()
{
	int t,i;
	long long int ans;
	long long int l,d,s,c;
	cin>>t;
	while(t--)
	{
	cin>>l>>d>>s>>c;	
	calcoeff(l,d,s,c);
	
	}
}


/*
//BRUTE FORCE
int likes(long long int d,long long int s,long long int c)
{
	if(d==0)
	{
		return s;
	}
	else
	{
		s= c*s+s;
		likes(d-1,s,c);
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t,i;
	cin>>t;
	while(t--)
	{
		long long int l,s,d,ans,c;
		cin>>l>>d>>s>>c;
		ans=likes(d-1,s,c);
		
		if(ans>=l)
		{
			cout<<"ALIVE AND KICKING\n";
		}
		else
		{
			cout<<"DEAD AND ROTTING\n";
		}
	}
	
}*/
