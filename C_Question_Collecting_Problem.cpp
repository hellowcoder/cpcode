//Author: sandeep172918
//Date: 2025-05-12 18:46

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

//binary search lagale bete
void solve(){
lli x;cin>>x;
get(a,x);get(b,x);
vector<pr>p(x);
fr(i,x){
    p[i]={b[i],a[i]};

}
sort(p.begin(),p.end(), [](const pair<lli,lli>& a, const pair<lli,lli>& b) {
        if (a.first != b.first)
            return a.first < b.first; // increasing order of first
        return a.second > b.second;   // decreasing order of second if first is same
    });

vec(maxi,x,0);
maxi[0]=p[0].ss;
frs(i,1,x-1){
    maxi[i]=max(maxi[i-1],p[i].ss);
}
// if(maxi[0]<=p[0].ff){
//     cout<<maxi[0]<<'\n';
//     return;
// }

lli s=p[x-1].ff;
rfr(i,x-2,0){
if(s>maxi[i+1]){
    cout<<maxi[i+1]<<'\n';
    return;
}
s+=p[i].ff;
}
cout<<min(s,maxi[0])<<'\n';


}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}