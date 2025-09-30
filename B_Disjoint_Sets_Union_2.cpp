//Author: sandeep172918
//Date: 2025-09-30 13:21

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 

class dsu{
    vll siz,par,mini,maxi;
    public:
  
    dsu(lli n){
        siz.resize(n);
        par.resize(n);
        mini.resize(n);
        maxi.resize(n);
        fr(i,n){
            par[i]=i;
            siz[i]=1;
            mini[i]=i;
            maxi[i]=i;
        }
    }
    lli find(lli x){
        if(par[x]==x)return x;
        return par[x]=find(par[x]);
    }
    bool connected(lli u,lli v){
        return find(u)==find(v);
    }
    bool join(lli u,lli v){
        u=find(u);
        v=find(v);
        if(u==v)return false;
        if(siz[u]<siz[v]) swap(u,v);
        siz[u]+=siz[v];
        par[v]=u;
        mini[u]=min(mini[u],mini[v]);
        maxi[u]=max(maxi[u],maxi[v]);

        return true;
    }
    lli size(lli u){
        return siz[find(u)];
    }
    lli minii(lli u){
        return mini[find(u)];
    }
    lli maxii(lli u){
        return maxi[find(u)];
    }

};


void solve(){
lli n,k;cin>>n>>k;
dsu ds(n);
fr(i,k){
    string s;cin>>s;
    if(s=="get"){
        lli u;cin>>u;u--;
        cout<<ds.minii(u)+1<<' '<<ds.maxii(u)+1<<' ';
        cout<<ds.size(u)<<'\n';
    }else{
        lli u,v;cin>>u>>v;
        u--;v--;
        ds.join(u,v);
    }
   
}

}

int32_t main(){
fastio;
lli tt=1;

while(tt--){
solve();
}
}