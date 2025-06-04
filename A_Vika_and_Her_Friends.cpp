//Author: sandeep172918
//Date: 2025-05-30 07:16

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
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
void solve(){
lli n,m,k;cin>>n>>m>>k;
lli x,y;cin>>x>>y;
// chess khelele bkl

vector<pr>p(k);
fr(i,k)cin>>p[i].ff>>p[i].ss;

fr(i,k){
    if((x+y)%2 ==  (p[i].ff+p[i].ss)%2){
        no;
        return;
    }
}
yes;
// vector<pr>dir;
// // if(x+1<=n)dir.push_back({x+1,y});
// // if(x-1>0)dir.push_back({x-1,y});
// // if(y+1<=m)dir.push_back({x,y+1});
// // if(y-1>0)dir.push_back({x,y-1});
// vector<lli>xd={0,0,-1,+1};
// vector<lli>yd={1,-1,0,0};
// fr(i,4){
//        lli newx=x+xd[i];
//        lli newy=y+yd[i];
//        if(newx<=n  && newy<=m  && newx>0  && newy>0)dir.push_back({newx,newy});   
// }
// lli g=dir.size();
// vector<lli>d(g,1);
// //fr(i,g)cout<<dir[i].ff<<dir[i].ss<<'\n';
// fr(i,k){
//     fr(j,4){
//        lli newx=p[i].ff+xd[j];
//        lli newy=p[i].ss+yd[j];
//        if(newx<=n  && newy<=m  && newx>0  && newy>0){
//          pr z={newx,newy};
//           fr(a,g){
//              if(z==dir[a]){
//                d[a]=0;
//              }
//           }
//        }
//     }
// }
// if(accumulate(all(d),0LL)==0)no;
// else yes;
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}