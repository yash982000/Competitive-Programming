#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<climits>

using namespace std;

int main()
{
	long double N;
	cin >> N;
	if(N>=-128 && N<=127){
		cout<<"byte"<<endl;
	}
	else if(N>=-32768 && N<=32767){
		cout<<"short"<<endl;
	}
	else if(N>=-2147483648 && N<=2147483647){
		cout<<"int"<<endl;
	}
	else if(N>=-9223372036854775808 && N<=9223372036854775807){
		cout<<"long"<<endl;
	}
	else 
	{
		cout << "BigInteger" <<endl;
	}
	
	return 0;	
}

