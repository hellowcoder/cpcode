//Author: sandeep172918
//Date: 2025-05-17 22:24

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,0));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v,n) frs(i,0,n-1)cout<<v[i]
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
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
void solve(){
lli n,c,d;cin>>n>>c>>d;
get(v,n*n);
lli check=mne(v);
map<lli,lli>m;
fr(i,n*n){
 m[v[i]]++;
}
//vec2(used,n,n);
vec2(pre,n,n);

fr(i,n){
    pre[i][0]=check;
    check+=c;
}
frs(i,0,n-1){
    frs(j,1,n-1){
       pre[i][j]=pre[i][j-1]+d;
       
    }
}
fr(i,n){
    fr(j,n){
       // cout<<pre[i][j]<<" ";
        if(m[pre[i][j]]<=0){
            no;return;
        }
        m[pre[i][j]]--;
    }//cout<<'\n';
}
yes;
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}