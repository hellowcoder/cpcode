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

bool check(vector<vector<lli>>& v,lli mid,lli x){
    lli ball =0;
    fr(i,x){
       ball+=((mid/v[i][0])*v[i][1]);

    }
    if() return false;
    return true;

}

void solve(){
lli x,y;cin>>x>>y;vector<vector<lli>>v(x,vector<lli>(3));
fr(i,y){
    cin>>v[i][0]>>v[i][1]>>v[i][2];

}
lli lo=0,hi=1e8,ans;
while(lo<hi){
    lli mid=(hi+lo)/2;
    if(check(v,mid,x)) hi=mid-1;
    else lo=mid+1;
}
cout<<lo;
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}