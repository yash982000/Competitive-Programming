#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
   int n,a[100000],s[100000],x=0;
   cin>>n;
   for(int i=1;i<=n;i++){
        cin>>a[i];
    s[i]=s[i-1]+a[i];
   }
  
   for(int i=1;i<=n;i++){
       if(s[i]==s[n]-s[i])
       x++;
   }
    cout<<x<<endl;
    return 0;
}
