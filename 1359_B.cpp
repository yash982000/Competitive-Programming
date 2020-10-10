/*  https://codeforces.com/contest/1359/problem/B*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<math.h>
#include<climits>

using namespace std;


#define pb pushback
#define tc testcase
#define mp make pair
#define x first
#define y second
const long long int MOD = 1e9+7;
const long long int INF = 1e9+5;
 
char a[105][1005];
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, x, y;
		cin >> n >> m >> x >>y;
		for (int i=0 ; i<n ; i++) {
			for (int j=0 ; j<m ; j++) {
				cin >>a[i][j];
			}
		}
		int sol = 0;
		for (int i=0 ; i<n ; i++) {
			for (int j=0 ; j<m ; j++) {
				if (j<m-1 && a[i][j] == '.' && a[i][j+1] == '.' && y<x*2) {
					a[i][j] = a[i][j+1] = '*';
					sol += y;
				} else if (a[i][j] == '.') {
					sol += x;
				}
			}
		}
		cout << sol << endl;
	}
	return 0;
}
