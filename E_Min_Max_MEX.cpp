//Author: sandeep172918
//Date: 2025-04-08 21:47
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,n)cin>>v[i]
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
lli mex(vector<lli>&v,lli k){
    map<lli,lli>m;
    fr(i,v.size()){
        m[v[i]]++;
    }
    lli check=0;
    while(m[check])check++;
    return check;
}
bool checking(lli mid,vector<lli>&v,lli k){
    // if(mid<=0)return true;
    // lli part=0;
    unordered_set<lli>s;  //keep track of mex
    lli check=0;
    // vector<bool>boli(v.size(),false)
    fr(i,v.size()){
        if(v[i]<mid){
           s.insert(v[i]);
        }
        if(s.size()==mid){  // agar bich me miss ho raha hai toh usko lag goroup me lelo
           check++;
           s.clear();
        }
    }
    return check>=k;
}
void solve(){
lli n,k;cin>>n>>k;get(v,n);
lli maxi=mex(v,k);
lli low=0,high=maxi;
while(low<=high){
 lli mid=(low+high)/2;
 if(checking(mid,v,k))low=mid+1;
 else high=mid-1;
}
cout<<low-1<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}