#pragma GCC optimize "Ofast"
#pragma GCC optimize "unroll-loops"
#pragma GCC target "sse,sse2,sse3,sse4,abm,avx,mmx,popcnt,tune=native"
#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar_unlocked())<'0'); for(x-='0'; '0'<=(_=getchar_unlocked()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define ll long long
#define MAXN 110
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
#define println cout << "\n";
#ifdef DEBUG
	#define D(x...) printf(x)
#else
	#define D(x...)
#endif
using namespace std;

int n, m;
ll minn, ans;
string lang;
map<string, int> dict;
vector<pii> adj[MAXN];
queue<int> q;
pii DP[MAXN];

int main (int argc, char const *argv[]) {
	#ifdef NOT_DMOJ
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif // NOT_DMOJ
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	dict["English"] = 0;
	for (int i=1; i<=n; i++) {
		cin >> lang;
		dict[lang] = dict.size();
	}
	for (int i=1; i<=n; i++) DP[i] = mp(INF, INF);
	for (int i=0, c; i<m; i++) {
		string a, b;
		cin >> a >> b >> c;
		adj[dict[a]].pb(mp(dict[b], c));
		adj[dict[b]].pb(mp(dict[a], c));
	}
	q.push(0);
	while (!q.empty()) {
		int curr = q.front();
		q.pop();
		for (size_t i=0; i<adj[curr].size(); i++) {
			pii &next = adj[curr][i];
			if (DP[next.f].f >= DP[curr].f + 1 && DP[next.f].s > DP[curr].s + next.s) {
				DP[next.f] = mp(DP[curr].f + 1, DP[curr].s + next.s);
				q.push(next.f);
			}
		}
	}
	for (int i=1; i<=n; i++) {
		minn = INF;
		if (DP[i].f == INF) {
			cout << "Impossible\n";
			return 0;
		}
		for (auto &next : adj[i]) if (DP[i].f == DP[next.f].f + 1) minn = min(minn, next.s);
		if (minn ^ INF) ans += minn;
	}
	cout << ans << "\n";
	return 0;
}

/* 
 * Look for:
 * the exact constraints (multiple sets are too slow for n=10^6 :( ) 
 * special cases (n=1?)
 * overflow (ll vs int?)
 * array bounds
 */