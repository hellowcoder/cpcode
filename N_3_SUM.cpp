//Author: sandeep172918
//Date: 2025-03-04 19:19
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli x;cin>>x;
vec(v,x);vector<lli>pre(10,0);
fr(i,x){
    lli a;cin>>a;
    v[i]=a%10;
    pre[v[i]]++;
}

fr(i,10){
   fr(j,10){
     fr(k,10){
        lli check=i+j+k;
        if((check%10)==3){
            vec(prec,10);prec=pre;
            if(prec[i]){
                prec[i]--;
                if(prec[j]){
                    prec[j]--;
                    if(prec[k]){
                        yes;return;
                    }
                }
            }
        }
    }
   }
}
no;

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}