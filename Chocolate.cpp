#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
      int n;
      cin >> n;
      int bar[n];
      for (int i = 0; i < n; ++i)
      {
          cin >> bar[i];
      }
      int d,sum;
      cin >> d;
      int m,a=0;
      cin >> m;
      for (int i = 0; i <= n-m; i++)
      {
          sum=0;
          for (int j = i; j < m+i; j++)
          {
              sum += bar[j];
          }
          if(sum==d)
              a++;
      }
      cout << a;
      return 0;
}
