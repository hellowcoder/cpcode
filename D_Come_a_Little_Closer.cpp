//Author: sandeep172918
//Date: 2025-05-26 20:50

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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
void solve(){
lli n;cin>>n;

map<lli,lli>xm,ym;
vec(x,n,0);
vec(y,n,0);
fr(i,n){
 cin>>x[i]>>y[i];
 xm[x[i]]++;
 ym[y[i]]++;
}
auto xc=x;
auto yc=y;
if(n==1){
    cout<<"1\n";
    return;
}
rsrt(xc);rsrt(yc);
lli ans=(xc[0]-xc[n-1]+1)*(yc[0]-yc[n-1]+1);
//cout<<ans<<" ";
fr(i,n){
    
    lli x1,y1,x2,y2;
    if(x[i]==xc[0]  && xm[x[i]]==1){
      x1=xc[1];
    }else x1=xc[0];

    if(x[i]==xc[n-1]  && xm[x[i]]==1){
      x2=xc[n-2];
    }else x2=xc[n-1];

    if(y[i]==yc[0]  && ym[y[i]]==1){
      y1=yc[1];
    }else y1=yc[0];

     if(y[i]==yc[n-1]  && ym[y[i]]==1){
      y2=yc[n-2];
    }else y2=yc[n-1];

    lli area=(x1-x2+1)*(y1-y2+1);

   if(area==n-1){
    area+=min(x1-x2+1,y1-y2+1);  // making a thin  strip  for that monstre
   }

    ans=min(ans,area);
}
cout<<ans<<'\n';

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}