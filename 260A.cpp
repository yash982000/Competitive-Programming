//Codeforces Round #260 (Div. 2), problem: (A) Laptops
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,p,q;
    cin>>n;
    vector< pair <int,int> > vect;
    bool ans=false;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        vect.push_back( make_pair(p,q) );
    }
    sort(vect.begin(), vect.end());
    for(int i=1;i<n;i++){
        if(vect[i].second<vect[i-1].second){
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"Happy Alex\n";
    }else{
        cout<<"Poor Alex\n";
    }
	return 0;
}
