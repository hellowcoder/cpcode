#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n,m;cin>>n>>m;vec(a,n);vec(b,m);lli sum1=0,sum2=0;fr(i,n){cin>>a[i];sum1+=a[i];}fr(i,m){cin>>b[i];sum2+=b[i];}srt(a);srt(b);
if(n==m){
    if(a==b) yes;
    else no;
    return;
}
if(sum1!=sum2){
    no;return;
}
priority_queue<lli>pq1,pq2;
for(auto &i:a){
    pq1.push(i);
}
for(auto &i:b){
    pq2.push(i);
}
while(true){
    while(pq1.top()==pq2.top()){
        pq1.pop();pq2.pop();
    }
    lli k=pq2.top();pq2.pop();pq2.push(k/2);pq2.push((k+1)/2);
    //cout<<k<<'\n';
    if(pq1.size()==pq2.size()) break;
}
lli k=pq1.size();
//cout<<k<<'\n';
while(!pq1.empty()){
    if(pq1.top()!=pq2.top()){
        no;return;
    }
    pq1.pop();pq2.pop();
}
yes;

}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}