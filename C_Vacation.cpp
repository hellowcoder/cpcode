//Author: sandeep172918
//Date: 2025-08-27 00:20

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
 
lli vacation(lli ind,vvll &v,lli state){
    if(ind<0){
        return 0;
    }
    lli maxi=0;
    fr(j,3){
        if(j==state){
            continue;
        }
        lli choice=vacation(ind-1,v,j)+v[ind][state];
        maxi=max(maxi,choice);
    }
    return maxi;
}

lli vacation_tab(vvll &v){
    lli n=v.size();
    vvll dp(n,vll(3,0));

    fr(j,3)dp[0][j]=v[0][j];

    frs(i,1,n-1){
        fr(j,3){
            lli maxi=0;
             fr(k,3){
                if(k!=j)maxi=max(maxi,dp[i-1][k]);
             }
             dp[i][j]=maxi+v[i][j];
        }
    }
    return max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});

}
void solve(){
lli n,k;cin>>n;
vvll v(n,vll(3));
fr(i,n)
  fr(j,3)cin>>v[i][j];
// lli ans=0;
// fr(j,3)ans=max(ans,vacation(n-1,v,j));
// cout<<ans<<'\n';
cout<<vacation_tab(v);

}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}