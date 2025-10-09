//Author: sandeep172918
//Date: 2025-10-09 12:06

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
#define bitc(x) __builtin_popcountll(x)
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
 
void solve(){
lli n,m;
string a,b;cin>>a>>b;
n=a.size();
m=b.size();
vvll dp(n+1,vll(m+1));
fr(i,n+1)dp[i][0]=i; //deleting all char
fr(i,m+1)dp[0][i]=i;

frs(i,1,n){
    frs(j,1,m){
        if(a[i-1]==b[j-1]){
          dp[i][j]=dp[i-1][j-1];
        }else{
          dp[i][j]=min({
             dp[i-1][j]+1, // is j wale ko delete kr rahe mtlb uske phle thik tha
             dp[i][j-1]+1,  //is j pe ek naya elemnt la rahe hai same i ko match krane ko iske mtlb iske upar tk thik tha
             dp[i-1][j-1]+1, 
          });
        }
    }
}
cout<<dp[n][m]<<'\n';


}

int32_t main(){
fastio;
lli tt=1;

while(tt--){
solve();
}
}