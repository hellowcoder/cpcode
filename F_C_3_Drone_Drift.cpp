//Author: sandeep172918
//Date: 2025-05-09 19:53

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

bool check(lli mid,lli x,lli y,string s){
char xd,yd;
if(x>0)xd='R';
else xd='L';
if(y>0)yd='U';
else yd='D';
x=abs(x),y=abs(y);
lli d=mid/s.size();
lli rem=mid%s.size();
lli xc=count(all(s),xd)*d;
lli yc=count(all(s),yd)*d;
fr(i,rem){
    if(s[i]==xd)xc++;
    if(s[i]==yd)yc++;
}
return xc*2>=x && yc*2>=y;
}

//binary search lagale bete
void solve(){
lli a,b,u,v;cin>>a>>b>>u>>v;
lli n;cin>>n;string s;cin>>s;
lli x=u-a,y=v-b;
lli low=0,high=1e10,ans=-1;
while(low<=high){
  lli mid=(low+high)/2;
   if(check(mid,x,y,s)){
    ans=mid;
    high=mid-1;
    
   }else low=mid+1;
}

cout<<ans<<'\n';

}

int32_t main(){
fastio;
solve();
}