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
#define check freq[x]
using namespace std;
const int MOD=1e9+7;
const lli maxi=1e6+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

lli n;
lli block_size;
vector<lli>v,freq,ans;
//map<lli,lli>m;
lli cans=0;
struct Query{
    lli l,r,idx;
     bool operator<(Query other) const
    {
        return make_pair(l / block_size, r) <
               make_pair(other.l / block_size, other.r);
    }
};

void add(lli curr){
lli x=v[curr];

cans-=check*check*x;
freq[x]++;
cans+=check*check*x;

}
void remove(lli curr){
lli x=v[curr];

cans-=check*check*x;
freq[x]--;
cans+=check*check*x;
}
lli get_ans(){
 
 return cans;
}
void Mo_algo(vector<Query>&q){
    //vector<lli>ans(q.size());
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
v.resize(n);
ans.resize(q);
freq.resize(maxi);
fr(i,n)cin>>v[i];
block_size=sqrt(n);
vector<Query>qu(q);
fr(i,q){
    lli a,b;
    cin>>a>>b;
    a--;b--;
    qu[i].idx=i;
    qu[i].l=a;
    qu[i].r=b;
}
Mo_algo(qu);
out(ans,q)<<'\n';
}

int32_t main(){
fastio;
solve();
}