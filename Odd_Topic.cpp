
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
const int sz=4e3+1;
 
void solve(){
lli n,m,k;cin>>n>>m>>k;
get(a,n);
get(b,m);
vector<bitset<sz>>aa(n+1);
vector<bitset<sz>>bb(m+1);
lli x;
frs(i,1,n){
 cin>>x;
 aa[i]=aa[i-1];
 aa[i][x]=1-aa[i][x];
}
frs(i,1,m){
 cin>>x;
 bb[i]=bb[i-1];
 bb[i][x]=1-bb[i][x];
}
bitset<sz>t1,t2;
fr(i,k){
    lli l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    t1=aa[r1]^aa[l1-1]; //0 means odd 1 means even 
    t2=bb[r2]^bb[l2-1];
    //even to be discardded 
    t1=t1^t2;
    cout<<t1.count()<<'\n';


}
}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}