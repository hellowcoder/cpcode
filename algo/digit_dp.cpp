//Author: sandeep172918
//Date: 2025-09-02 00:15

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
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
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
lli dpp(lli n,lli x){  //number of all number upto n digit having digit sum = x;
    if(n==0){
        if(x==0)return 1;
        return 0;
    }
    lli c=0;
    fr(i,10){
        if(i<=x){
            c+=dpp(n-1,x-i);
        }
    }
    return c;
}

//number of all number upto k having digit sum = x;

lli dppp(string maxi,lli n,lli x,bool tight){ 
    if(n==0){
        if(x==0)return 1;
        return 0;
    }
    lli ub=tight ? (maxi[maxi.size()-n]-'0'):9;
    lli c=0;
    fr(i,ub+1){
        if(i<=x){
            c+=dppp(maxi,n-1,x-i,tight);
        }
    }
    return c;
}



void solve(){
lli k;
string n;cin>>n>>k;
cout<<dppp(n,n.size(),k,1)<<'\n';

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}