//Educational Codeforces Round 87 (Rated for Div. 2), problem: (B) Ternary String
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findSubString(string str, string pat)
{
    ll len1 = str.length();
    ll len2 = pat.length();
    if (len1<len2) {
        return 0;
    }
    ll hash_pat[256] = {0};
    ll hash_str[256] = {0};
    
    for(ll i=0; i<len2; i++)
        hash_pat[pat[i]]++;

    ll start=0,index = -1, len = INT_MAX, count = 0;
    
    for (ll j = 0; j < len1 ; j++){
        hash_str[str[j]]++;
        if (hash_pat[str[j]] != 0 && hash_str[str[j]] <= hash_pat[str[j]] )
            count++;

        if (count == len2){
            while ( hash_str[str[start]]>hash_pat[str[start]] || hash_pat[str[start]] == 0){
                if (hash_str[str[start]]>hash_pat[str[start]])
                    hash_str[str[start]]--;
                start++;
            }
            int len_window= j-start+1;
            if (len>len_window){
                len=len_window;
                index=start;
            }
        }
    }
    if (index<0){
        return 0;
    }
    return len;
}
int main(){
    ll t;
    string str = "";
    string pat = "123";
    cin>>t;
    while(t--){
        cin>>str;
        cout <<findSubString(str, pat)<<"\n";
    }
    return 0;
}
