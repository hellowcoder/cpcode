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
#define out(v,n) frs(i,0,n-1)cout<<v[i]
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

lli n;
lli block_size;
vector<lli>v,freq,ans;
lli cnt=0;
struct Query{
    lli l,r,idx;
     bool operator<(Query other) const
    {
        return make_pair(l / block_size, r) <
               make_pair(other.l / block_size, other.r);
    }
};
map<lli,lli>m;
set<lli>st;
void add(lli curr){
  m[v[curr]]++;
  if(m[v[curr]]==1)cnt++;

}
void remove(lli curr){
  m[v[curr]]--;
  if(m[v[curr]]<=0)  
    cnt--;
}
lli get_ans(){
  return cnt;
}

void Mo_algo(vector<Query>&q){
    sort(all(q));
    lli cur_l=0,cur_r=-1;  // take care if index strat from 1 then cur_r=0 else -1;
    
    for(auto &it:q){
        while(it.l<cur_l){
            cur_l--;
            add(cur_l);
        }
        while(it.r>cur_r){
            cur_r++;
            add(cur_r);
        }
        while(it.l>cur_l){
            remove(cur_l);
            cur_l++;
        }
        while(it.r<cur_r){
            remove(cur_r);
            cur_r--;
        }
        ans[it.idx]=get_ans();
    
    }

}

//binary search lagale bete
void solve(){
cin>>n;lli k;cin>>k;
vector<Query>q(k);
block_size=(lli)sqrt(n);
v.resize(n);
fr(i,n)cin>>v[i];
ans.resize(k);
lli x=k-1;
while(k--){
    lli l,r;
    cin>>l>>r;
    l--;r--;
    q[k].l=l;
    q[k].r=r;
    q[k].idx=x-k;
}
Mo_algo(q);
fr(i,x+1)cout<<ans[i]<<'\n';

}

int32_t main(){
fastio;
lli tt=1;
while(tt--){
solve();
}
}