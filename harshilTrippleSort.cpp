#include<bits/stdc++.h>
using namespace std;
#define fast std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define input int t;cin>>t;while(t--)
#define f(i, a, b) for (int i = (a); i < (b); i++)
#define mp make_pair
#define pb push_back
/*
1
7 10
3 4 5 2 1 7 6
probable answer 1
3
1 3 5
2 4 6
2 7 6

probable answer 2
3
1 3 5
2 6 7
2 6 4

1
7 10
3 5 4 2 1 7 6



*/
int i,j,k;
int main()
{
	//fast;
	input
	{
		int n,k;
		cin>>n>>k;
		int a[n+1];
		unordered_map<int,int> mark;
		f(i,1,n+1)
		{
			cin>>a[i];
		}
		for(i=n; i>=1; i--)
		{
			if(a[i]!=i)
				mark[a[i]]=i;
		}
//		for(auto itr: mark)
//		{
//			cout<<itr.first<<" "<<itr.second<<"\n";
//		}
		int cnt=0;
		int sum=0;
		vector<int> v;
		int flag=0;
		vector<tuple<int, int, int> > vt; 
   		f(i,1,n+1)
		{
			cnt++;
			while(a[i]!=cnt)
				{
					int t1,t2,t3=0;
					t1=i;
					t2=a[t1];
					int temp=i+1;
					int temp2=i;
					
					if(a[t2]!=t2 and a[t2]!=t1)
						t3=a[t2];
					
					else
					{
						//cout<<t1<<" "<<t2<<"\n";
						for (auto itr : mark) 
  						{
  							if(itr.second!=0 and itr.second!=t2 and itr.second!=t1)
							{
								//cout<<itr.second<<"\n ";
							    t3=itr.second;
							    break;
							}			   	
						}
					}
					if(flag or t3==0)
					{
						flag=1;
						break;
					}
						
					sum++;
					vt.pb(make_tuple(t1,t2,t3));
					int temp1=a[t3];
					
					mark[a[t3]]=t1;
					a[t3]=a[t2];
					
					mark[a[t2]]=t3;
					a[t2]=a[t1];
					
					mark[a[t1]]=t2;
					a[t1]=temp1;
		
					if(a[t1]==mark[a[t1]])
						mark[a[t1]]=0;
					if(a[t2]==mark[a[t2]])
						mark[a[t2]]=0;
					if(a[t3]==mark[a[t3]])
						mark[a[t3]]=0;
					
				//	cout<<a[i]<<"ai "<<i<<"i "<<a[t3]<<"at3 "<<t3<<"t3\n";
				
//					for(auto itr:mark)
//						cout<<itr.first<<" "<<itr.second<<"\n";
				}
				if(flag)
					break;
					
		
//			f(j,1,n+1)
//				cout<<a[j]<<" ";
//			cout<<"\n";
		}
		cnt=0;
		f(i,1,n+1)
		{
			cnt++;
			if(a[i]!=cnt)
			{
				flag=1;
				break;
			}
		}
		if(flag or sum>k)
			cout<<"-1\n";
		else
		{
			cout<<sum<<"\n";
			f(i,0,vt.size())
			{
				cout<<get<0>(vt[i])<<" "<< get<1>(vt[i])<<" "<<get<2>(vt[i])<<"\n"; 
			}
		}
		
	}

}

