//Author: sandeep172918
//Date: 2025-03-18 21:07
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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli x,m,c;cin>>x>>m>>c;
get(v,x);
//vec2(pre,x+1,x);
lli a=0,b=0;
vector<lli>p(x+1);
p[0]=0;
fr(i,x){
    if(v[i]<m)a++;
    if(v[i]>m)b++;
    p[i+1]=a-b;
}
// fr(i,x+1)cout<<p[i]<<" ";
// cout<<'\n';
// fr(i,x+1){
//    pre[i]=v;
   
//    pre[i].insert(pre[i].begin()+i,m);
// }
// fr(i,x+1){
//     fr(j,x+1){
//         cout<<pre[i][j]<<" ";
//     }cout<<'\n';
// }
lli count=0;
fr(i,x+1){
    lli k=p[i];
    if(c>m)k--;
    else if(m>c)k++;
    a=0,b=0;
    if(k>0)count++;
    k=p[i];
    v.insert(v.begin()+i,m);
    fr(j,x+1){
        if(j<i){
            if(c>m)k--;
            else if(m>c)k++;
        }
       
        if(v[j]<c)a++;
        if(v[j]>c)b++;
        lli ch=a-b;
        if(k>ch)count++;
        k=p[i];
    }
    v.erase(v.begin()+i);
}
cout<<count<<'\n';
}

int32_t main(){
fastio;
solve();
}