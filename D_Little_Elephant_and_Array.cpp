//Author: sandeep172918
//Date: 2025-05-17 08:38

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
const lli max_a=1e6+5;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

lli n;
lli block_size;
lli cur_ans=0; 
vector<lli>freq,ans,v;
struct Query{
    lli l,r,idx;
     bool operator<(Query other) const
    {
        return make_pair(l / block_size, r) <
               make_pair(other.l / block_size, other.r);
    }
};

lli get_ans(){
    return cur_ans;
}

void add(lli curr){
 lli x=v[curr];
 if(x>=max_a)return;    // if x is greater than n no freq cant be found eaqul to it
 if(freq[x]==x)cur_ans--;
 freq[x]++;
 if(freq[x]==x)cur_ans++;
}

void remove(lli curr){
 lli x=v[curr];
 if(x>=max_a)return;    // if x is greater than n no freq cant be found eaqul to it
 if(freq[x]==x)cur_ans--;
 freq[x]--;
 if(freq[x]==x)cur_ans++;
}

void Mo_algo(vector<Query>&q){
    
    sort(all(q));
    lli cur_l=0,cur_r=-1;
    
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
lli q;cin>>n>>q;
ans.resize(q);
v.resize(n);
freq.resize(max_a);  // freq n+1 nhi ho skta 
fr(i,n)cin>>v[i];
block_size=sqrt(n);
vector<Query>quer(q);
fr(i,q){
    lli a,b;cin>>a>>b;
    a--;b--;
    quer[i].l=a;
    quer[i].r=b;
    quer[i].idx=i;
}
Mo_algo(quer);
out(ans,q)<<'\n';
}

int32_t main(){
fastio;
solve();
}