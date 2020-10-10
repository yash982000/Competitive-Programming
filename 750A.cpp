#include<bits/stdc++.h>
using namespace std;
int main(){
	int limit=(4*60),n,t,ques=0;
	cin>>n>>t;
	int a=5,i=1;
	while(limit-a >= t && n>0){
		ques++;
		n--;
		i++;
		a+=(i*5);
	}
	cout<<ques<<endl;
	
	return 0;
}
