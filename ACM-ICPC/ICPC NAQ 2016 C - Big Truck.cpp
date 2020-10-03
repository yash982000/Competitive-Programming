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
#ifdef DEBUG
	#define D(x...) printf(x)
#else
	#define D(x...)
#endif
using namespace std;

int n, m, a, b, d;
int t[MAXN], DP[MAXN];
priority_queue<pii> pq;
int dist[MAXN];
vector<pii> adj[MAXN];

int main () {
	#ifdef NOT_DMOJ
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif // NOT_DMOJ
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i=0; i<n; i++) cin >> t[i];
	cin >> m;
	while (m--) {
		cin >> a >> b >> d;
		adj[--a].pb(mp(--b, d));
		adj[b].pb(mp(a, d));
	}
	pq.push(mp(0, 0));
	memset(dist, INF, sizeof(dist));
	DP[0] = t[0];
	dist[0] = 0;
	while (!pq.empty()) {
		pii curr = pq.top();
		pq.pop();
		if (curr.f > dist[curr.s]) continue;
		for (size_t i=0; i<adj[curr.s].size(); i++) {
			pii &next = adj[curr.s][i];
			if (dist[next.f] >= dist[curr.s] + next.s) {
				if (dist[next.f] == dist[curr.s] + next.s) DP[next.f] = max(DP[next.f], DP[curr.s] + t[next.f]);
				else DP[next.f] = DP[curr.s] + t[next.f];
				dist[next.f] = dist[curr.s] + next.s;
				pq.push(mp(dist[next.f], next.f));
			}
		}
	}
	if (dist[n - 1] == INF) {
		cout << "impossible" << "\n";
		return 0;
	}
	cout << dist[n - 1] << " " << DP[n - 1] << "\n";
	return 0;
}

/* 
 * Look for:
 * the exact constraints (multiple sets are too slow for n=10^6 :( ) 
 * special cases (n=1?)
 * overflow (ll vs int?)
 * array bounds
 */