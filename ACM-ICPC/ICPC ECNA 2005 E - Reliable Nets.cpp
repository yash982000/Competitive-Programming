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

int n, m, a, b, c, idx, bridges, test_case;
ll ans = INF, tot;
vector<pair<int, pii> > adj[MAXN];
vector<pair<int, pii> > edges;
int dist[MAXN], low[MAXN], DFN[MAXN], par[MAXN];
bool vis[MAXN];

struct Disjoint {
private:
	int N;
	vi lead, rank;

public:
	Disjoint (int N) : N(N), lead(N + 1), rank(N + 1) { }

	inline void make_Set () {
		for (int i=0; i<N; i++) {
			lead[i] = i;
			rank[i] = 0;
		}
	}

	inline int Find (int x) {
		while (lead[x] ^ x) {
			lead[x] = lead[lead[x]];
			x = lead[x];
		}
		return x;
	}

	inline bool Merge (int a, int b) {
		return Find(a) ^ Find(b);
	}

	inline void Union (int a, int b) {
		int c = Find(a), d = Find(b);
		if (Merge(a, b)) {
			if (rank[c] > rank[d]) {
				lead[d] = c;
				rank[c] += rank[d];
			}
			else {
				lead[c] = d;
				rank[d] += rank[c];
			}
		}
	}
};

inline void TarjansDFS (int node, int prev, int bit) {
	low[node] = DFN[node] = idx++;
	vis[node] = 1;
	for (size_t i=0; i<adj[node].size(); i++) {
		pair<int, pii> &next = adj[node][i];
		if (next.s.f == prev) continue;
		if (!(bit & (1 << next.f))) continue;
		if (!DFN[next.s.f]) {
			par[next.s.f] = node;
			TarjansDFS(next.s.f, node, bit);
			low[node] = min(low[node], low[next.s.f]);
			// Found a bridge
			if (low[next.s.f] == DFN[next.s.f]) {
				// cout << next << " is part of a bridge " << "\n";
				bridges++;
			}
		}
		if (next.s.f ^ par[node]) low[node] = min(low[node], DFN[next.s.f]);
	}
}

int main () {
	#ifdef NOT_DMOJ
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif // NOT_DMOJ
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	while (1) {
		cin >> n >> m;
		if (!n && !m) break;
		for (int i=0; i<n; i++) adj[i].clear();
		edges.clear();
		for (int i=0; i<m; i++) {
			cin >> a >> b >> c;
			adj[--a].pb(mp(i, mp(--b, c)));
			adj[b].pb(mp(i, mp(a, c)));
			edges.pb(mp(c, mp(a, b)));
		}
		ans = INF;
		for (int i=0; i<1 << m; i++) {
			Disjoint ds(n);
			ds.make_Set();
			int bit = i;
			int cnt = n;
			for (int j=0; j<m; j++) {
				if (!(i & (1 << j))) continue;
				if (ds.Merge(edges[j].s.f, edges[j].s.s)) {
					ds.Union(edges[j].s.f, edges[j].s.s);
					--cnt;
				}
			}
			if (cnt ^ 1) continue;
			bridges = idx = 0;
			memset(low, 0, sizeof(low));
			memset(DFN, 0, sizeof(DFN));
			// cout << bit << endl;
			for (int j=0; j<n; j++) if (!DFN[j]) TarjansDFS(j, -1, bit);
			if (!bridges) {
				tot = 0;
				for (int j=0; j<m; j++) {
					if (!(i & (1 << j))) continue;
					tot += edges[j].f;
				}
				ans = min(ans, tot);
			}
			// cout << tot << "\n";
		}
		if (ans == INF || bridges) cout << "There is no reliable net possible for test case " << test_case + 1 << ".\n";
		else cout << "The minimal cost for test case " << test_case + 1 << " is " << ans << ".\n";
		++test_case;
	}
	return 0;
}

/* 
 * Look for:
 * the exact constraints (multiple sets are too slow for n=10^6 :( ) 
 * special cases (n=1?)
 * overflow (ll vs int?)
 * array bounds
 */