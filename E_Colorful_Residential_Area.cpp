//Author: sandeep172918
//Date: 2025-10-15 16:05

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
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
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
while(true){
lli n,k;cin>>n;
if(n==0)break;
get(v,n);
if(n==1){
    yes;
    cout<<v[0]<<'\n';
    continue;
}
if(n==2){
    if(v[0]!=v[1]){
        no;continue;
    }
    yes;
    fr(i,n){
        fr(j,n)cout<<v[0]<<' ';
        cout<<'\n';
    }
    continue;
}
vvll ans(n,vll(n,0));
if(v[0]!=v.back()){
   //fill


lli l=1;
lli r=n-2;
while(l<n) {
    if(v[l]==v.back())break;
    l++;
}
while(r>=0){
    if(v[r]==v[0])break;
    r--;
}
if(l>=r){
    no;continue;
}



frs(i,l,r){
  ans[n-1][i]=v[i];
}
rfr(i,r,l){
    ans[0][n-1-i]=v[i];
}
frs(i,l,r){
    ans[i][0]=v[i];
}
rfr(i,r,l){
    ans[n-1-i][n-1]=v[i];
}

frs(i,1,n/2-1){
    ans[i][i]=v[i];
}
rfr(i,n-2,n/2){
    ans[i][i]=v[n-1-i];
}



 // see
  vll a(n),b(n),c(n),d(n);
fr(i,n){
 rfr(j,n-1,0){
    if(ans[j][i]){
          a[i]=ans[j][i];
          break;
   }
 }
}
fr(i,n){
    fr(j,n){
        if(ans[i][j]){
            d[i]=ans[i][j];
            break;
        }
    }
}

fr(i,n){
    rfr(j,n-1,0){
        if(ans[i][j]){
            b[i]=ans[i][j];
            break;
        }
    }
}
reverse(all(b));

fr(i,n){
  fr(j,n){
    if(ans[j][i]){
        c[i]=ans[j][i];
        break;
    }
  }
}
reverse(all(c));

out(a);
out(b);
out(c);
out(d);
// if(a==v && b==v && c==v && d==v){
    yes;
    fr(i,n){
    fr(j,n){
        cout<<ans[i][j]<<' ';
    }
    cout<<'\n';

} 
//}else no;

continue;
}
yes;

fr(i,n){
  ans[n-1][i]=v[i];
}
rfr(i,n-1,0){
    ans[0][i]=v[(n-1)-i];
}
fr(i,n){
    ans[i][0]=v[i];
}
rfr(i,n-1,0){
    ans[i][n-1]=v[(n-1)-i];
}
fr(i,n){
    fr(j,n){
        cout<<ans[i][j]<<' ';
    }
    cout<<'\n';
}
}
}


int32_t main(){
fastio;
solve();
}