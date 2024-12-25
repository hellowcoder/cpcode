#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<=(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<

using namespace std;
const int MOD=1e9+7;

lli mex2(lli x,lli y){
    if(x==0 || y==0){
        if(x==1  || y==1) return 2;
        else return 1;
    }
    return 0;
}
lli mex3(lli x,lli y,lli z){
   bool present[4]={false,false,false,false};
   if(x<4) present[x]=true;
   if(y<4) present[y]=true;
   if(z<4) present[z]=true;
   fr(i,4){
    if(!present[i]) return i;
   }
   return 0;
}

void solve(){
lli n,x,y;cin>>n>>x>>y;vector<pair<lli,pair<lli,lli>>>v(n+1);
frs(i,1,n){
 lli k= (i==x? y:-1),l=(i==y?x:-1);
 lli f= (i==1 ? n : i-1);
 lli s= (i==n ? 1 : i+1);
 if(i==x)v[i]={k,{f,s}};
 else  v[i]={l,{f,s}};
//cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<'\n';
}
vector<lli>ans(n+1,1e9);
frs(i,1,n){
  if(v[i].first==-1)  {
      ans[i]=mex2(ans[v[i].second.second],ans[v[i].second.first]);
  }else{
      ans[i]=mex3(ans[v[i].second.second],ans[v[i].second.first],ans[v[i].first]);
  }
}
frs(i,1,n){
    cout<<ans[i]<<" ";
}cout<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}