#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
 
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,minimum=99999999,j=0;
    string s;
    map<char, int> temp;
    cin>>n>>s;
    for(int i=1; i<n; i++) {
        temp[s[i]]++;
        int k = temp[s[i]];
        while(temp[s[j]] > 1) {
            temp[s[j]]--;
            j++;
        }
        if( k == 1) 
        minimum = i-j+1;
        else 
        minimum = min(minimum, i-j+1);
    }
    cout<<minimum;
    return 0;
}
