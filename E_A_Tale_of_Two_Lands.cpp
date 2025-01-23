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

void solve(){
lli n;cin>>n;vec(v,n);fr(i,n){lli x;cin>>x;x=abs(x);v[i]=x;};srt(v);lli pair=0;
// for(auto i : v){
//     cout<<i<<"*";
// }
fr(i,n){
    lli ans=0;
    lli k=v[i];
    lli low=i+1,high=n-1;
    while(low<=high){
        lli mid=(low+high)/2;
        lli req=2*k;
        if(v[mid]<=req){
            ans=(mid-i);
            low=mid+1;
        }else
        high=mid-1;
    }
    pair+=ans;
}
cout<<pair<<'\n';
}

int main(){
fastio;solve();
}