//Author: sandeep172918
//Date: 2025-08-21 21:15

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
#define vb vector<bool>
#define vp vector<pr>
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

//max(a,b)=(a+b+abs(a-b))/2
//min(a,b)=(a+b-abs(a-b))/2

//binary search lagale bete

// four stage of dp  
//  --think in term of index i,j whatever 
 //   --find bse case --  
//   -- find relation  
//   -- good to go
 
//chicken nugget formula 
//   -- max number which can be written in form of ax+by where __gcd(x,y)=1 id x*y-x-y 
//  -- total(x-1)(y-1)/2 numbers can be written in that form
 
//copied from google
lli sumOfDigitsFrom1ToNUtil(lli n, vector<lli> &a) {
    if (n < 10)
        return (n * (n + 1) / 2);

    lli d = (lli)(log10(n));
    lli p = (lli)(ceil(pow(10, d)));
    lli msd = n / p;

    return (msd * a[d] + (msd * (msd - 1) / 2) * p 
            + msd * (1 + n % p) + sumOfDigitsFrom1ToNUtil(n % p, a));
}

// Function to computer sum of digits in
// numbers from 1 to n
lli sumOfDigits(lli n) {
    lli d = max(((lli)(log10(n))), 1LL);
    vector<lli> a(d + 1);
    a[0] = 0;
    a[1] = 45;

    for (lli i = 2; i <= d; i++)
        a[i] = a[i - 1] * 10 + 45 * (lli)(ceil(pow(10, i - 1)));

    return sumOfDigitsFrom1ToNUtil(n, a);
}



lli check(lli mid){
    lli ans=0;
    for(lli i=1;i<=mid;i*=10){
        ans+=(mid-i+1);
    }
    return ans;
}
 
void solve(){
lli n,k;cin>>n;
// 9*1 90*2 900*3 9000*4 90000 900000

lli low=1,high=n;
lli ans=0;
while(low<=high){
    lli mid=low+(high-low)/2;
    k=check(mid);
    if(k>n){
        high=mid-1;
    }else low=mid+1;
}
lli mini=low-1;
lli chek=check(mini);
lli sum=sumOfDigits(mini);
//cout<<chek<<'\n';
string s=to_string(mini+1);
frs(i,chek,n-1){
  sum+=(s[i-chek]-'0');
}
cout<<sum<<'\n';
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}