
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
 
void solve(){
lli n,k;cin>>n;
get(v,n);
if(n==2){
    cout<<abs(v[0]-v[1])<<'\n';
    return;
}
if(n==3){

    cout<<min({v[0]+v[1]+v[2],abs(v[0]-v[1])+abs(v[0]-v[2]),abs(v[1]-v[0])+abs(v[1]-v[2]),abs(v[2]-v[1])+abs(v[0]-v[2])})<<'\n';
    return;

}
lli ans=0;
ans+=abs(v[0]-v[1]);
ans+=abs(v[n-1]-v[n-2]);
lli c=0;
frs(i,2,n-3){
  c++;
  if(i==(n-3)){
    if(c==3){
     ans+=v[i-2];
     ans+=abs(v[i]-v[i-1]);
    }else if(c==2){
        ans+=v[i]+v[i-1];
    }else{
       ans+=v[i];
    }
    break;
  }
  if(c==3){
     c=0;
     ans+=v[i-2];
     ans+=abs(v[i]-v[i-1]);
  }
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}