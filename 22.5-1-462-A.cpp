/* YASH PATEL*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<math.h>
#include<climits>

using namespace std;

#define ll long long int
#define pb pushback
#define tc testcase
#define mp make pair
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define start ll t; cin>>t; while(t--)

void solve(){
    ll n,counter=0,i,j;
	char arr[200][200];
	cin >> n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		cin >> arr[i][j];
	    }
	}
	bool x=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
//		 counter=0;
//			counter=0;
			
			if(arr[i][j-1]=='o' && j>1)
			   counter++;
			   
			if(arr[i][j+1]=='o' && j<n)
			   counter++;
			   
			if(arr[i-1][j]=='o' && i>1)
			   counter++;
			   
			if(arr[i+1][j]=='o' && i<n)
			   counter++;
			
			   
	    if(counter==1 || counter==3){
	        	x=0;
	        	break;
	        }
	     }
		   if(x==0)
	    	break;
		}
		   if(x==1)
	        	cout << "YES" << endl;
	     	else
		        cout << "NO" << endl;
} 

int main(){
    FIO;
   // start{
        solve();
 //   }
    return 0;
}

