//Author: sandeep172918
//Date: 2025-08-06 19:28

#include <bits/stdc++.h>

#define lli long long int
#define fr(i,n) for(lli i=1;i<=n;i++)
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

 
void solve(){
lli n,k;cin>>n;
vector<lli>v(n+1);
fr(i,n)cin>>v[i];
map<lli,lli>m;
vector<lli>visited(n+1,0);
fr(i,n){
    if(!visited[i]){
      lli curr=i;
      lli len=0;
      while(!visited[curr]){
        len++;
        visited[curr]=1;
        curr=v[curr];
      }
      if(len>=2)m[len]++;
    }
}
// for(auto &it:m){
//     cout<<it.ff<<' '<<it.ss<<'\n';
// }
lli ans=0;
for(auto &it : m){
  lli curr=0;
  lli len=it.ff; //len -1 operation
  fr(i,n){
    lli check=(((len)*i)+(len-1-1))/(len-1)-1;
    if(check<0)check=0;  // no need to swap
    if(check>n)check=n;  // dont swap ,,just do opertion 1;
    lli prefix=(len-1)*check*(check+1)/2;
    lli suffix=(n-check)*(len)*i;
    curr+=(prefix+suffix);
  }
  curr*=it.ss;
  ans+=curr;
}
cout<<ans<<'\n';
}

int32_t main(){
fastio;
//solve();
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}