
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

string a(lli x){
    string s="";
    while(x){
        s+=to_string(x%2);
        x/=2;
    }
    reverse(all(s));
    if(s.size()==0)return "0";
    return s;
}
void solve(){
lli n,k,d;cin>>n>>d;
lli ans=1e18;
fr(i,63){
    k=1LL<<i;
    if(k>n)break;
    if((n-k)%d)continue;
    lli sum=(n-k)/d;
    
   lli req=sum/k; //shuruat me kitna add krna hai ki uplift ho paye
    lli rem=sum%k; //last se uplifting
    lli step=i+req+__builtin_popcountll(rem);
    cout<<i<<' '<<req<<' '<<a(rem)<<' '<<step<<'\n';
    ans=min(ans,step);
}
if(ans==1e18){
    no1;
}else cout<<ans<<'\n';
}
int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}