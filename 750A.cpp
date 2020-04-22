#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,sum=0,counter=0,temp=0;
    cin >> n >> k;
    temp=240-k;
		 for(int i=1;i<=n;i++){
		 	sum+=5*i;
		 	if(temp>=sum){
    	     counter++;
    	 }
	}
	cout << counter;
	return 0;
}
