//Author: sandeep172918
//Date: 2025-05-12 21:03

#include <bits/stdc++.h>
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
#define out(v,n) frs(i,0,n-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

//binary search lagale bete
void print(vector<lli>&spf,lli x){
    for(lli i=2;i*i<=x;i++){
        if(spf[i]==i){
            for(lli j=i*i;j<=x;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
} 
lli cb(lli x){
    lli low=0,high=1e6;

    while(low<=high){
        lli mid=(high+low)/2;
        lli k=mid*mid*mid;
        if(k==x)return mid;
        else if(k>x)high=mid-1;
        else low=mid+1;
    }
    return -1;
}
void solve(){    //prime factorisation....
lli x,y;cin>>x>>y;
lli c=x*y;
//cout<<c<<" ";
lli k=cb(c);
//cout<<k<<" ";
if(k*k*k==c){
   if(x%k==0  && y%k==0)yes;
   else no;
}else no;
}


int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}