#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#define mod 1000000007
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
#define T(a) \
    ll a;    \
    cin >> a;
#define TT(t) \
    T(t);     \
    while (t--)
#define pb push_back
#define mp make_pair

const int INF = 1 << 29;

typedef long long ll;
#define int long long
inline int two(int n)
{
    return 1 << n;
}
inline int test(int n, int b)
{
    return (n >> b) & 1;
}
inline void set_bit(int &n, int b)
{
    n |= two(b);
}
inline void unset_bit(int &n, int b)
{
    n &= ~two(b);
}
inline int last_bit(int n)
{
    return n & (-n);
}
inline int ones(int n)
{
    int res = 0;
    while (n && ++res)
        n -= n & (-n);
    return res;
}
ll gcd(ll a, ll b)
{
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}
ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}
ll power(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
ll powermod(ll x, ll y)
{
    ll res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}
ll mulmod(ll a, ll b)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }
    return res;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
            return false;
    }
    return true;
}
long double dist(ll x1, ll y1, ll x2, ll y2)
{
    return (long double)sqrt((long double)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}
ll squaredist(ll x1, ll y1, ll x2, ll y2)
{
    return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
ll nCr(ll n, ll r)
{
    if (r == 0)
        return 1;
    return (n * nCr(n - 1, r - 1)) / r;
}
ll countDivisors(ll n)
{
    ll cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cnt++;
            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}
ll modulo(ll a, ll b)
{
    ll r = a % b;
    return r < 0 ? r + b : r;
}
void fs(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c == '-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c = getchar())
        number = number * 10 + c - 48;
    if (negative)
        number *= -1;
}
using namespace std;
//using namespace boost::multiprecision;
string &maximizeNumber(string &N, string &M)
{
    sort(N.begin(), N.end());

    for (int i = 0; i < N.size(); i++)
        for (int j = i + 1; j < N.size(); j++)
        {

            // Copying the string into another
            // temp string.
            string t = N;

            // Swaping the j-th char(digit)
            // with i-th char(digit)
            swap(t[j], t[i]);

            // Sorting the temp string
            // from i-th pos to end.
            sort(t.begin() + i + 1, t.end());

            // Checking if the string t is
            // greater than string N and less
            // than or equal to the number M.
            if (t > N && t <= M)

                // If yes then, we will permanently
                // swap the i-th char(or digit)
                // with j-th char(digit).
                swap(N[i], N[j]);
        }

    // Returns the maximized number.
    return N;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    TT(t)
    {
        string a;
        cin >> a;
        string b;
        cin >> b;
        cout << maximizeNumber(a, b) << "\n";
    }
    return 0;
}
