//Author: sandeep172918
//Date: 2025-04-26 23:06

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

void solve(){
lli x;cin>>x;get(v,x);//srt(v);
map<lli,lli>m;
lli mini=mne(v);
lli maxi=mxe(v);
fr(i,x){
    m[v[i]]++;
    if(m[v[i]]>=4){
        yes;return;
    }
}
bool bol=false;
lli check=-1;
// frs(i,mini,maxi){
//     if(!bol){
//         if(m[i]>=2){
//         bol=true;
//     }
//     }  
//     else{
//         if(m[i]==0){bol=false;}
//         else if(m[i]==1)continue;
//         else{
//            // cout<<i;
//             yes;
//             return;
//         }
//     }
// }
for(auto &it:m){
    if(!bol){
        if(it.ss>=2){
            check=it.ff;
            bol=true;

        }
    }
    else{
        if(it.ff!=check+1){
           if(it.ss>=2)check=it.ff;
           else bol=false;
        }
        else{
            if(it.ss==1){
                check=it.ff;
                continue;
            }else{
                yes;
                return;
            }
        }
    }
}
no;

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}