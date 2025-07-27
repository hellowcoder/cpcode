//Author: sandeep172918
//Date: 2025-07-26 22:51

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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//binary search lagale bete
vector<lli>palindrome;
vector<lli>dp(40001,0);

void generate_palin(lli n){  // of n lenght
    lli half_len=(n+1)/2;
    lli mini=pow(10,half_len-1);
    lli maxi=pow(10,half_len)-1;
    
    frs(num,mini,maxi){
        if(num>=400)break;
        string first_half=to_string(num);
        string second_half=first_half;
        reverse(all(second_half));
        string pal="";
        if(n%2==0){
          pal=first_half+second_half;
        }else{
            pal=first_half+second_half.substr(1);
        }
        lli palin=stoll(pal);
        palindrome.psb(palin);
    }

}
void precompute(){
 frs(i,1,5)generate_palin(i);
 dp[0]=1;
 for(auto &it:palindrome){
    frs(i,it,40000){
        dp[i]=(dp[i]+dp[i-it])%MOD;
    }
 }
}

void solve(){
lli n,k;cin>>n;

cout<<dp[n]<<'\n';
}

int32_t main(){
fastio;
precompute();
lli tt;cin>>tt;
while(tt--){
solve();
}
}