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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

lli counter(lli mid,lli x){
    lli toffee=0;
    while(x>0){
        if(x<=mid){
            toffee+=x;
            break;
        }
        x-=mid;
        x-=(x/10);
       toffee+=(mid);
    }
    return toffee;
}

void solve(){
lli x;cin>>x;
lli low=1,high=x,ans=0;
while(low<=high){
    lli mid=low+(high-low)/2;
    lli k=counter(mid,x);
    if(k>=(x+2-1)/2){
        ans=mid;
        high=mid-1;
    }else
   low=mid+1;
}
cout<<ans;
}

int main(){
fastio;
solve();
}