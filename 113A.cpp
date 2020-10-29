#include <iostream>
#include<bits/stdc++.h>
#include <utility>
using namespace std;
#define ll long long in

bool sortinrev(const pair<int,int> &a, const pair<int,int> &b)
{
       if(a.first>b.first){
        return true;
       }
       else if(a.first ==b.first){
        return a.second < b.second;
       }
       else{ return false; }
}


int main(){
    vector< pair <int, int> > vect;
    int n,k,cnt=0,i=0;
    cin>>n>>k;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vect.push_back( make_pair(a,b));
    }

    sort(vect.begin(), vect.end(), sortinrev);
    while(vect[i].first>=vect[k-1].first){
        if(vect[i].first==vect[k-1].first && vect[i].second==vect[k-1].second){
            cnt++;
        }
        i++;
    }
    cout<<cnt<<endl;
    return 0;
}
