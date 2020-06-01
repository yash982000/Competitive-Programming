//// Yash Patel //
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main() {
	int n,temp=0,temp1=0;
	cin>>n;
	int a[n],a1[n],a2[n];
	for(int i=0;i<n;i++){
		int p,q;
		cin>>p>>q;
		cin.ignore();
		a[i]=p;
		a1[i]=q;
		a2[i]=q;
	}
	for(int i=0;i<n;i++){
		if(a[i]==a1[i])
			++temp;
	}
	sort(a1,a1+n);
	for(int i=n-1,j=0;i>=0;i--,j++)
	{
		if(a1[i]==a2[j])
		 ++temp1;
	}
	if(temp!=n)
		cout<<"rated";
	else if(temp==n && temp1==n){
        cout<<"maybe";
	}
	else{
        cout<<"unrated";
	}
 	return 0;
}
