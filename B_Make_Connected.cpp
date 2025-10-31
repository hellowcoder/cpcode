//Author: sandeep172918
//Date: 2025-10-30 22:25

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
lli n,k;cin>>n;
//get(v,n);
vector<string>v(n);

fr(i,n){
    fr(j,n)
   cin>>v[i][j];
}
if(n>=5){
    no;return;
}
if(n<=2){
    yes;
    return;
}
fr(i,n){
    if(count(all(v[i]),'.')==2){
      v[i][1]='#';
    }
}
fr(j,n){
    lli c=0;
    fr(i,n){
        c+=(v[i][j]=='.');
    }
    if(c==2){
        v[1][j]='#';
    }
}
fr(i,n){
    lli c=0;
    fr(j,n){
        c+=(v[i][j]=='#');
    }
    if(c==3){
        no;return;
    }
}
fr(j,n){
    lli c=0;
    fr(i,n){
        c+=(v[i][j]=='#');
    }
    if(c==3){
        no;return;
    }
}
yes;
// fr(i,n){
//     fr(j,n){
//         if(v[i][j]=='#'){
//             lli c=0;
//            frs(k,j+1,n-1){
//              if(v[i][k-1]==v[i][k]  && v[i][k]=='.'){
//                 v[i][k]='#';
//              }
//            }
//            rfr(k,j-1,0){
//              if(v[i][k]==v[i][k+1]  && v[i][k]=='.'){
//                 v[i][k]='#';
//              }
//            }
//            frs(k,i+1,n-1){
//              if(v[k-1][j]==v[k][j]  && v[k][j]=='.'){
//                 v[k][j]='#';
//              }
//            }
//            rfr(k,i-1,0){
//              if(v[k][j]==v[k+1][j]  && v[k][j]=='.'){
//                 v[k][j]='#';
//              }
//            }

//         }
//     }
// }

// fr(i,n){
//     fr(j,n-2){
//         if(v[i][j]=='#' && v[i][j+1]=='#'  && v[i][j+2]=='#'){
//             no;return;
//         }
//     }
// }
// fr(j,n){
//     fr(i,n-2){
//          if(v[i][j]=='#' && v[i+1][j]=='#'  && v[i+2][j]=='#'){
//             no;return;
//         } 
//     }

// }
// yes;

// fr(j,n){
//     lli co=0;
//     fr(i,n){
//     co+=(v[i][j]=='#');
//     }
//     c[j]=co;
// }
// out(r);
// out(c);
// srt(r);
// srt(c);
// if(r==c)yes;
// else no;
}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
   
solve();
}
}