//Author: sandeep172918
//Date: 2025-08-17 17:34

#include <bits/stdc++.h>

#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v) frs(i,0,v.size()-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;

lli check(lli a,lli b,lli c){
    if(a==1 && b==1 && c==1)return 4;
    if(a==0 && b==0 && c==0)return 1;
    if(a==1 && b==1 && c==0)return 1;
    if(a==0 && b==1 && c==1)return 1;
    if(a==1 && b==0 && c==1)return 1;
    return 0;
} 
 

void solve(){
lli p,q,r;cin>>p>>q>>r;
lli ans=check(p&1,q&1,r&1);
frs(i,1,19){
    lli a=(p>>i)&1;
    lli b=(q>>i)&1;
    lli c=(r>>i)&1;
    ans*=check(a,b,c);
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}