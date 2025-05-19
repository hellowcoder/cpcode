//Author: sandeep172918
//Date: 2025-05-12 20:02

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,0));
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
void print(vector<vector<lli>>v,lli x,lli layer){
    fr(i,x){

        lli c=0;
        if(i<layer)c=1;
        fr(j,x){
            cout<<c-v[i][j]<<" ";
        }
        cout<<'\n';
    }
}
void solve(){
lli x,k;cin>>x>>k;
vec2(v,x,x);
lli layer=0;
lli a=1;
map<lli,lli>m;
while(a<1001){
    m[4*a*a]++;
    a++;
}
if(k%x==0){
    layer=k/x;
    yes;
    print(v,x,layer);

}else{
    if(m[k]){
        yes;
        fr(i,sqrt(k))
        fr(j,sqrt(k))
        v[i][j]=1;
        fr(i,x){
            fr(j,x)cout<<v[i][j]<<" ";
            cout<<'\n';  
        }      
    }
    else{
        fr(i,1000){
            bool boli=false;
            fr(j,1000){
                
            }
        }
    }

}
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}