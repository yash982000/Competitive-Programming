/* YASH PATEL*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<math.h>
//#include<climits>

using namespace std;

#define ll long long int
#define pb pushback
#define tc testcase
#define mp make pair

int main(){
	int T;
	//cin >> T;
	//while(T--){
	//    cin >> n >> k;
        int number, temp = 1;
        cin >> number;
        while (temp <= number){
               if (not(number % temp))
                cout << temp << " ";
                temp++;
              }
        cout << endl;
     //   }
	}
