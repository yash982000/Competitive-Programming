#include <bits/stdc++.h>
#define ll long long
#define MAXN 5010
#define INF 0x3f3f3f3f
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define umii unordered_map<int, int>
using namespace std;

string s;
int res1, res2, seq[MAXN];

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	getline(cin, s);
	for (int i=s.length() - 1; i>=0; i--) {
		res1 += s[i] == '(' ? -1 : 1;
		if (res1 < 0) res1 = INF >> 1;
		seq[i] = res1;
	}
	for (int i=0; i<s.length(); i++) {
		res2 = 0;
		for (int j=0; j<i; j++) {
			res2 += s[j] == '(' ? 1 : -1;
			if (res2 < 0) res2 = -INF >> 1;
		}
		for (int k=i; k<s.length(); k++) {
			if (res2 == seq[k]) {
				cout << "possible" << endl;
				return 0;
			}
			res2 += s[k] == ')' ? 1 : -1;
			if (res2 < 0) res2 = -INF >> 1;
			if (res2 == seq[k + 1]) {
				cout << "possible" << endl;
				return 0;
			}
		}
	}
	cout << "impossible" << endl;
	return 0;
}