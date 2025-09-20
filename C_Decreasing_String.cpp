//Author: sandeep172918
//Date: 2025-09-20 19:38

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
 
void solve(){
lli n,k;cin>>n;
string s;cin>>s;
cin>>k;
vll m(26);
fr(i,n){
    m[s[i]-'a']++;
}
lli maxi=(n*(n+1))/2;
lli check=maxi-k;
vll pre(n+1);
fr(i,n+1){
    pre[i]=(i*(i+1))/2;
}
lli step_l=lower_bound(all(pre),check)-pre.begin();
lli x=step_l+1;
string remain="";
lli curr=0;
fr(i,26){
    curr+=m[i];
    if(curr>x){
        lli prev=curr-x;
        m[i]-=prev;
        frs(j,i+1,25)m[j]=0;
        break;
    }
}
fr(i,n){
 if(m[s[i]-'a'])remain+=s[i];
}
cout<<remain<<'\n';


}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}