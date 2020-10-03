#pragma GCC optimize "Ofast"
#pragma GCC optimize "unroll-loops"
#pragma GCC target "sse,sse2,sse3,sse4,abm,avx,mmx,popcnt,tune=native"
#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar_unlocked())<'0'); for(x-='0'; '0'<=(_=getchar_unlocked()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define ll long long
#define MAXN 100010
#define INF 0x3f3f3f3f
#define min(a, b) (a) < (b) ? (a) : (b)
#define max(a, b) (a) < (b) ? (b) : (a)
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define umii unordered_map<int, int>
using namespace std;

int n, k, r, cnt;
ll ans;
bool flag[MAXN];

int main () {
	#ifdef NOT_DMOJ
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif // NOT_DMOJ
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k >> r;
	for (int i=0, x; i<k; i++) {
		cin >> x;
		flag[x] = 1;
		cnt += x < r;
	}
	for (int i=0; i<=n - r; i++) {
		if (cnt == 1) {
			if (flag[i + r - 1]) flag[i + r - 2] = 1;
			else flag[i + r - 1] = 1;
			cnt++;
			ans++;
		}
		if (cnt == 0) {
			flag[i + r - 1] = flag[i + r - 2] = 1;
			cnt += 2;
			ans += 2;
		}
		cnt += flag[i + r] - flag[i];
	}
	cout << ans << "\n";
	return 0;
}