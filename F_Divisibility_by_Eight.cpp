//Author: sandeep172918
//Date: 2025-03-30 20:30
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
string s;cin>>s;lli x=s.size();

fr(i,x){
    lli check1=s[i]-'0';
    if(check1%8==0){
        yes;cout<<check1;return;
    }
    frs(j,i+1,x){
      lli check2=(s[i]-'0')*10+(s[j]-'0');
      if(check2%8==0){
        yes;cout<<check2;return;
      }
        frs(l,j+1,x){
            lli check3=(s[i]-'0')*100+(s[j]-'0')*10+(s[l]-'0');
            if(check3%8==0){
                cout<<"YES\n";
                cout<<check3;
                return;
            }
        }
    }
}
cout<<"NO";
}

int32_t main(){
fastio;
solve();
}