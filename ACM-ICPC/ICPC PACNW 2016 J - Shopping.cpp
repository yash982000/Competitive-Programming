#pragma GCC optimize "Ofast"
#pragma GCC optimize "unroll-loops"
#pragma GCC optimize "omit-frame-pointer"
#pragma GCC optimize "prefetch-loop-arrays"
#pragma GCC target "sse,sse2,sse3,sse4,abm,avx,aes,sse4a,sse4.1,sse4.2,mmx,popcnt,tune=native"
#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar_unlocked())<'0'); for(x-='0'; '0'<=(_=getchar_unlocked()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define ll long long
#define ull unsigned long long
#define MAXN 200010
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define umii unordered_map<int, int>w
#define allof(x) x.begin(), x.end()
#define DEBUG 1
// #define NOT_DMOJ 0
#ifdef DEBUG
	#define D(x...) printf(x)
#else
	#define D(x...)
#endif
using namespace std;

inline int GCD (int a, int b) { return b == 0 ? a : GCD(b, a % b); }
inline int LCM (int a, int b) { return a * b / GCD(a, b); }
inline ll PowMod (ll a, ll b, ll mod) { ll val = 1; while (b) { if (b & 1) val = (val * a) % mod; a = (a * a) % mod; b >>= 1; } return val; }

int n, q;
ll v, l, r;
ll a[MAXN];

struct Node {
	ll l, r, val;
};

struct Seg {
private:
	int N;
	vector<Node> tree;

public:
	Seg (int N) : N(N), tree(N << 2) { }

	inline void Push_Up (int idx) {
		tree[idx].val = min(tree[idx << 1].val, tree[idx << 1 | 1].val);
	}

	inline void Build (int idx, ll l, ll r) {
		tree[idx].l = l, tree[idx].r = r;
		if (l == r) {
			tree[idx].val = a[l];
			return;
		}
		ll mid = (l + r) >> 1;
		Build(idx << 1, l, mid);
		Build(idx << 1 | 1, mid + 1, r);
		Push_Up(idx);
	}

	inline ll Query (int idx, ll l, ll r, ll val) {
		if (tree[idx].r < l || tree[idx].l > r || tree[idx].val > val) return INF;
		if (tree[idx].l == tree[idx].r) return l;
		ll mid = (tree[idx].l + tree[idx].r) >> 1;
		if (tree[idx].l == l && tree[idx].r == r) {
			if (tree[idx << 1].val <= val) return Query(idx << 1, l, mid, val);
			else return Query(idx << 1 | 1, mid + 1, r, val);
		}
		if (r <= mid) return Query(idx << 1, l, r, val);
		else if (l > mid) return Query(idx << 1 | 1, l, r, val);
		else return min(Query(idx << 1, l, mid, val), Query(idx << 1 | 1, mid + 1, r, val));
	}
};

Seg tree(MAXN);

int main (int argc, char const *argv[]) {
	#ifdef NOT_DMOJ
	freopen("DATA.in", "r", stdin);
	freopen("DATA.out", "w", stdout);
	#endif // NOT_DMOJ
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> q;
	for (int i=0; i<n; i++) cin >> a[i];
	tree.Build(1, 0, n - 1);
	while (q--) {
		cin >> v >> l >> r;
		ll idx = tree.Query(1, --l, --r, v);
		while (idx ^ INF) {
			v %= a[idx];
			idx = tree.Query(1, l, r, v);
		}
		cout << v << "\n";
	}
	return 0;
}

/* 
 Look for:
 * the exact constraints (multiple sets are too slow for n=10^6 :( ) 
 * special cases (n=1?)
 * overflow (ll vs int?)
 * array bounds
 * number of test cases (T = 10)
 * resetting containers, variables, etc
 */