//Author: sandeep172918
//Date: 2025-07-19 21:31

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
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//binary search lagale bete
struct point{
 lli x,y,ind;
};
void solve(){
lli n,k;cin>>n;
vector<point>v(n);
fr(i,n){
 cin>>v[i].x>>v[i].y;
 v[i].ind=i;
}
auto vx=v;
auto vy=v;
sort(all(vx),[](const point&a,const point&b){
   return a.x<b.x;
});
sort(all(vy),[](const point&a,const point&b){
   return a.y<b.y;
});

// divide adha adha

vector<bool>left(n,false),bottom(n,false);
fr(i,n/2){
    left[vx[i].ind]=true;
}
fr(i,n/2){
    bottom[vy[i].ind]=true;
}

//1 quad and 4th quad
vector<lli>q1,q2,q3,q4;
fr(i,n){
 if(!left[i] && !bottom[i])q1.psb(i+1);
 if(!left[i] && bottom[i])q4.psb(i+1);
 if(left[i] && !bottom[i])q2.psb(i+1);
 if(left[i] && bottom[i])q3.psb(i+1);
}

fr(i,q1.size())cout<<q1[i]<<" "<<q3[i]<<'\n';
fr(i,q2.size())cout<<q2[i]<<" "<<q4[i]<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}