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

int main(){
	
	int Y,W,ans=0;
    cin >> Y >> W;
    
    const string temp[7]={"0/1","1/1","5/6","2/3","1/2","1/3","1/6"};
    ans = max(Y,W);
    cout << temp[ans] << endl;
    return 0;
}
 

    
    
