//Author: sandeep172918
//Date: 2025-10-22 20:53

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
#define bitc(x) __builtin_popcountll(x)
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
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n,k;cin>>n>>k;
get(v,n);
get(b,n);
map<lli,lli>mv,mb;
fr(i,n)mv[-v[i]]++;
fr(i,n)mb[-b[i]]++;

auto iv=mv.begin();
auto ib=mb.begin();
lli ans=0;
while(iv!=mv.end() || ib!=mb.end()){
    if(iv->first != ib->first){
       lli mini=min(iv->second,ib->second); 
       ans+=(abs(iv->first+ib->first))*mini;
       if(iv->second==mini)iv=next(iv);
       if(ib->second==mini)ib=next(ib);
    }
    else{
        auto iv1=next(iv);
        auto ib1=next(ib);
        if(iv1==mv.end()  && ib1==mb.end())break;
        if(iv1==mv.end()){
            lli mini=min(iv->second,ib1->second);
             ans+=(abs(iv->first+ib1->first))*mini;
            if(iv->second==mini)iv=next(iv);
           if(ib1->second==mini)mb.erase(ib1);
        }
        else if(ib1==mb.end()){
            lli mini=min(iv1->second,ib->second);
             ans+=(abs(iv1->first+ib->first))*mini;
            if(iv1->second==mini)mv.erase(iv1);
           if(ib->second==mini)ib=next(ib);
        }
        else{
           if(iv1->ff <= ib1->ff){
             lli mini=min(iv1->second,ib->second);
             ans+=(abs(iv1->first+ib->first))*mini;
            if(iv1->second==mini)mv.erase(iv1);
           if(ib->second==mini)ib=next(ib);
           }else{
             lli mini=min(iv->second,ib1->second);
             ans+=(abs(iv->first+ib1->first))*mini;
            if(iv->second==mini)iv=next(iv);
           if(ib1->second==mini)mb.erase(ib1);
           }
        }
    }
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