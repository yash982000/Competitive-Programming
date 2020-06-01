#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int a,b,T;
    cin >> T;
    while(T--){
        cin >> a >> b;
        if(a%b==0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
     return 0;
}
