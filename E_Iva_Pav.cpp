//Author: sandeep172918
//Date: 2025-05-08 09:08

#include <bits/stdc++.h>
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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

lli f(lli l,lli r,vector<vector<lli>>&pre){
    lli ans=0;
    fr(i,33){
        lli sum=pre[r][i]-pre[l-1][i];
        if(sum==(r-l+1))ans+=(1LL<<i);
    }
    return ans;
}

void solve(){
lli x;cin>>x;get(v,x);
vec2(bits,x,33);
vec2(pre,x+1,33);
fr(i,x){
    fr(j,33){
        lli k=1LL<<j;
        if(v[i]&k)bits[i][j]++;
    }
} 
frs(i,1,x){
    fr(j,33){
        pre[i][j]=pre[i-1][j]+bits[i-1][j];
    }
}
lli q;cin>>q;
while(q--){
    lli l,k;cin>>l>>k;
    if(v[l-1]<k){
        cout<<"-1 ";
        continue;
    }
    // lli d=v[l-1];
    // frs(i,l,x-1){
    //     d=d&v[i];
    //     cout<<d<<" ";
        
    // }cout<<'\n';
    // frs(i,l,x-1){
    //     cout<<f(l,i+1,pre)<<" ";
    // }cout<<'\n';
    lli low=l,high=x,ans=l;
    while(low<=high){
        lli mid=(low+high)/2;
        lli check=f(l,mid,pre);// cout<<mid<<" "<<check<<" ";
        if(check>=k){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
   cout<<low-1<<" ";
}

cout<<'\n';

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}