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
lli x;cin>>x;vec(v,x);fr(i,x)cin>>v[i];vec(cp,x);fr(i,x)cin>>cp[i];vector<lli>s;lli count=0;lli index=0;
vec(gap,x);
fr(i,x){
    gap[i]=v[i]-cp[i];
    if(gap[i]<0)count++;

    s.psb(gap[i]);
}lli sum=0;
for(auto i:s){
    sum+=i;
}
//cout<<sum;
//cout<<count;
if(count==1){
    fr(i,x){
        if(gap[i]<0){
            index=i;break;
        }
    }
    //cout<<gap[index]<<" ";
    lli req=abs(gap[index]);
    fr(i,x){
        if(v[i] >= cp[i] && v[i] - req < cp[i]){
            no;return;
        }

    }
    yes;
}else if(count==0) yes;
else no;

}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}