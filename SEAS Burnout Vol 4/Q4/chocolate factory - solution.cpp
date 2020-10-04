#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#define mod 1000000007
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
inline bool EQ(double a, double b) { return fabs(a - b) < 1e-9; }
const int INF = 1 << 29;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n >> b) & 1; }
inline void set_bit(int &n, int b) { n |= two(b); }
inline void unset_bit(int &n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n)
{
    int res = 0;
    while (n && ++res)
        n -= n & (-n);
    return res;
}
template <class T>
void chmax(T &a, const T &b) { a = max(a, b); }
template <class T>
void chmin(T &a, const T &b) { a = min(a, b); }

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long int lcm(long long int a, long long int b)
{
    return (a * b) / gcd(a, b);
}

long long int max(long long int a, long long int b)
{
    if (a > b)
        return a;
    return b;
}

long long int power(long long int x, long long int y)
{
    long long int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

long long int powermod(long long int x, long long int y)
{
    long long int res = 1;
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

int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 

long long mulmod(long long a, long long b)
{
    long long res = 0;
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

bool isPrime(long long int n)
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

long double dist(long long int x1, long long int y1, long long int x2, long long int y2)
{
    return (long double)sqrt((long double)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}
long long int squaredist(long long int x1, long long int y1, long long int x2, long long int y2)
{
    return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

long long int nCr(long long int n, long long int r)
{
    if (r == 0)
        return 1;
    return (n * nCr(n - 1, r - 1)) / r;
}

long long int countDivisors(long long int n)
{
    long long int cnt = 0;
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

int xorRange( int x, int y)
{
    if (x % 2 == 0)
    {
        int pattern[] = {y, 1, y + 1, 0};
        return pattern[(int)((y - x) % 4)];
    }
    else
    {
        int pattern[] = {x, x ^ y, x - 1, (x - 1) ^ y};
        return pattern[(int)((y - x) % 4)];
    }
}


using namespace std;

vector<int> initializeDiffArray(vector<int>& A) 
{ 
    int n = A.size(); 
  
    // We use one extra space because 
    // update(l, r, x) updates D[r+1] 
    vector<int> D(n + 1); 
  
    D[0] = A[0], D[n] = 0; 
    for (int i = 1; i < n; i++) 
        D[i] = A[i] - A[i - 1]; 
    return D; 
} 
  
void update(vector<int>& D, int l, int r, int x) 
{ 
    D[l] += x; 
    D[r + 1] -= x; 
} 
   
int printArray(vector<int>& A, vector<int>& D) 
{ 
    int mm=INT_MIN;
    for (int i = 0; i < A.size(); i++) { 
        if (i == 0) 
            A[i] = D[i];  
        else
            A[i] = D[i] + A[i - 1];
        mm = max(mm,A[i]);
    } 
    return mm;
} 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin >> n >> q;
    vector<int> a;
    map<int,int> ma;
    for (int i = 0; i < n; i++)
    {
       int x;
       cin >> x;
       a.pb(x);
    }
    int mm =INT_MIN;
    vector<int> d = initializeDiffArray(a);
    for (int i = 0; i < q; i++)
    {
       char c;
       cin >> c;
       if(c=='C')
       {
          int l,h,x;
          cin >> l >> h >> x;
          update(d,l-1,h-1,x);
       }
       else{
          // ll mm=INT_MIN;
          // for (int i = 0; i < n; i++)
          // {
          //    mm = max(mm,a[i]);
          // }
          cout << printArray(a, d) << "\n";
       }
    }
    
    return 0;
}

