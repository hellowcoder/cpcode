//Author: sandeep172918
//Date: 2025-06-10 18:29

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
#define out(v) frs(i,0,v.size()-1)cout<<v[i]
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
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//binary search lagale bete
// void solve(){
// lli n,k;cin>>n>>k;
// get(v,n);
// //map<lli,lli>m;
// ordered_set<pr>os;
// fr(i,k){
//    // m[v[i]]++;
//     os.insert({v[i],i});

// }
// lli md;
// if(k%2) md=k/2;
// else md=k/2-1;
// auto it=*os.find_by_order(md);
// cout<<it.ff<<" ";
// frs(i,k,n-1){
//     os.insert({v[i],i});
//     os.erase({v[i-k],i-k});
//     auto it=*os.find_by_order(md);
//     cout<<it.ff<<" ";
// }
lli n,k;
multiset<lli,greater<lli>>min_half;
multiset<lli>max_half;
lli mini,maxi;
void balance_min(){
 if(min_half.size() > (k+1)/2){
    lli check=*min_half.begin();
    max_half.insert(check);
    
    min_half.erase(min_half.find(check));
    mini-=check;
    maxi+=check;
 }
}

void balance_max(){
  if(max_half.size() > k/2){
    lli check=*max_half.begin();
    min_half.insert(check);
    max_half.erase(max_half.find(check));
    mini+=check;
    maxi-=check;
 }
}

void add(lli x){
 if(x>*min_half.begin()){
     max_half.insert(x);
     maxi+=x;
     balance_max();
 }else{
    min_half.insert(x);
    mini+=x;
    balance_min();
 }
}

void remove(lli x){
 if(max_half.find(x) != max_half.end()){
    max_half.erase(max_half.find(x));
    maxi-=x;
 }else{
    min_half.erase(min_half.find(x));
    mini-=x;
 }

 if(min_half.empty()){
    lli check=*max_half.begin();
    min_half.insert(check);
    max_half.erase(max_half.find(check));
    mini+=check;
    maxi-=check;
 }
}

lli median(){
    if(k%2)return *min_half.begin();
     return 0;
}
void solve(){
cin>>n>>k;
mini=0,maxi=0;
get(v,n);
if(k==1){
    fr(i,n)cout<<"0 ";
    return;
}
min_half.insert(v[0]);
mini+=v[0];
frs(i,1,k-1){
    add(v[i]);
}
cout<<median()+maxi-mini<<" ";
frs(i,k,n-1){
   remove(v[i-k]);
   add(v[i]);
  cout<<maxi-mini+median()<<" ";
}
}

int32_t main(){
fastio;
solve();
}