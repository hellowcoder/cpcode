//Author: sandeep172918
//Date: 2025-10-23 14:37

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
vector<vector<string>>N_Queen;
vll queen; 
lli n;
void n_queen(lli row,lli col,lli diag1,lli diag2){
   if(row==n){
     vector<string>b(n,string(n,'.'));
     fr(i,n){
        b[i][queen[i]]='Q';
     }
     N_Queen.psb(b);
     return;
   }
   lli avail=((1LL<<n)-1) & ~(col|diag1|diag2); //available position for this row

   while(avail){
     lli pick=avail & ~avail;  //rightmost set bit
     avail-=pick;
     
     lli col_pos=__builtin_ctz(pick);//count number of zero at the end
     queen[row]=col_pos;

     n_queen(row+1,col|pick,(diag1|pick)<<1,(diag2|pick)>>1);
   }
}

vvll M_color;
vll color;
vvll adj;
lli n,m;

bool safe(lli node,lli c){
    for(auto &it : adj[node]){
        if(color[it]==c)return false;
    }
    return true;
}

void M_coloring(lli ind){
    if(ind==n){
        M_color.psb(color);
        return;
    }
    frs(c,1,m){
     if(safe(ind,c)){
       color[ind]=c;
       M_coloring(ind+1);
       color[ind]=0;
     }
    }
}




lli n;
lli start=0;
vvll adj(20);
vvll dp(1LL<<20,vll(20,-1));
lli hamiltonian_c(lli mask,lli ind){
  if(mask==(1<<n)-1){
    for(auto &it:adj[ind]){
      if(it==start)return 1;
    }
    return 0;
  }
 

  if(dp[mask][ind] != -1)return dp[mask][ind];
  lli ans=0;
  
  for(auto &it:adj[ind]){
    lli k=1LL<<it;
    if(k&mask)continue;
    lli new_mask=k|mask;
    ans+=hamiltonian_c(new_mask,it);
  }
  return ans;

}

lli hamiltonian_p(lli mask,lli ind){
  if(mask==(1<<n)-1) return 1;
 

  if(dp[mask][ind] != -1)return dp[mask][ind];
  lli ans=0;
  
  for(auto &it:adj[ind]){
    lli k=1LL<<it;
    if(k&mask)continue;
    lli new_mask=k|mask;
    ans+=hamiltonian_p(new_mask,it);
  }
  return ans;

}


void solve(){
lli n,k;cin>>n>>k;
//get(v,n);

}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}