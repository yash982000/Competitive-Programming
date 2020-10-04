#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        char s[n];
        int cons =0, vowel=0;
        for(int j=0; j<n; j++){
            cin>>s[j];
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowel++;
            }else{
                cons++;
            }
        }
        cout<<(vowel+cons)<<"\n";
    }
}
