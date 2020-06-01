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
    int A,B,temp=1;
    cin >> A >> B;
    for(int i=1;i<=min(A,B);i++){
        temp *= i;
    }
    cout << temp << endl;
    return 0;
    
}




