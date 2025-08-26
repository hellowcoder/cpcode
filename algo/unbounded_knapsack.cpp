//Author: sandeep172918
//Date: 2025-08-26 22:57

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
#define vb vector<bool>
#define vp vector<pr>
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


lli unb_knap(lli ind,vector<lli>&val,vector<lli>&wt,lli maxx){   //recurssive
    if(ind<0){
        return (maxx/wt[0])*val[0];
    }
    lli non_pick= unb_knap(ind-1,val,wt,maxx);
    lli pick=INT_MIN;
    if(maxx >= wt[ind]){
        pick=val[ind]+unb_knap(ind,val,wt,maxx-wt[ind]);
    }
    return max(pick,non_pick);
}
 
lli unb_knap_tab(vector<lli>&val,vector<lli>&wt,lli maxx){
    lli n=val.size();
    vvll dp(n,vll(maxx+1,0));
    frs(i,0,maxx){
        dp[0][i]=(i/wt[0])*val[0];
    }
    frs(i,1,n-1){
        frs(w,0,maxx){
            lli non_pick=dp[i-1][w];
            lli pick=INT_MIN;
            if(wt[i]<=w){
                pick=dp[i][w-wt[i]]+val[i];
            }
            dp[i][w]=max(pick,non_pick);
        }
    }
    return dp[n-1][maxx];
}

void solve(){
lli n,k;cin>>n>>k;
get(val,n);
get(wt,n);
cout<<unb_knap_tab(val,wt,k)<<'\n';
//cout<<unb_knap(n-1,val,wt,k);

}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}