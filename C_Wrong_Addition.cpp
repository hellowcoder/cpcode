//Author: sandeep172918
//Date: 2025-05-31 17:10

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v) frs(i,0,v.size()-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
void solve(){
lli a,s;cin>>a>>s;
string b="";
while(s){
    lli c=s%10;
    lli k=a%10;
    if(c<k){
        s/=10;
        if(s==0){
        cout<<"-1\n";
        return;
        }
        c+=(s%10)*10;
        if(c<10  || c>18){
             cout<<"-1\n";
             return;
        }
    }
    
    if((c-k)<0){
        cout<<"-1\n";
        return;
    }
    string ck=to_string(c-k);
    if(ck.size()>=2 ){ 
        cout<<"-1\n";
        return;
    }
    b=ck+b;
    s/=10;
    a/=10;
}
b='0'+b;
if(a==0)cout<<stoll(b)<<'\n';
else cout<<"-1\n";
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}