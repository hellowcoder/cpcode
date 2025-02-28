#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define take(lli,x) lli x;cin>>x
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
//vector<lli>sp(1e5+7);


void solve(){
lli n,s,e;cin>>n>>s>>e;lli a,b;
vector<lli>adjac[n+1],ans(n),sp(n+1);

fr(i,n-1){
    cin>>a>>b;
    adjac[a].psb(b);
    adjac[b].psb(a);
}
fr(i,n){
    ans[i]=i+1;
    sp[i+1]=1e12;
}
sp[0]=1e12;
queue<lli>q;q.push(e);//basically i am finding shortest path length of every vertices from end;
sp[e]=0;
while(!q.empty()){
    lli node=q.front();
    
    q.pop();
    fr(i,adjac[node].size()){
        if(sp[adjac[node][i]]==1e12){
            sp[adjac[node][i]]=sp[node]+1;

            q.push(adjac[node][i]);
        }
    }
}
sort(all(ans),[&](lli a,lli b){
    return sp[a]>sp[b];
});
for(lli &i:ans){
    cout<<i<<" ";
}cout<<'\n';

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}