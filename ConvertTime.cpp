#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
      int h,m,s;
      char a1,a2,temp,temp1;
      cin >> h >> a1 >> m >> a2 >> s >> temp >> temp1;
      if(temp=='A')
      {
        if(h==12)
          h=00;
        if(h<10 )
            cout << "0"<< h << a1;
        else
            cout << h << a1;
        if(m<10 )
            cout << "0" << m << a2;
        else
            cout << m << a2 ;
        if(s<10 )
            cout << "0" <<s;
          else
            cout << s;

      }
      else  if(temp=='P')
      {
        if(h<12)
          h += 12;
        if(h<10 )
            cout << "0"<< h << a1;
        else
            cout << h << a1;
        if(m<10 )
            cout << "0" << m << a2;
        else
            cout << m << a2 ;
        if(s<10 )
            cout << "0" <<s;
          else
            cout << s;
      }


      return 0;
}
