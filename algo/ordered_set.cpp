//Author: sandeep172918
//Date: 2025-05-14 13:28

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
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;




const int MOD=1e9+7;

//binary search lagale bete
void solve(){
ordered_set<lli>os;
os.insert(2);
os.insert(1);
os.insert(10);

cout<<"*os.find_by_order(0)--> "<<*os.find_by_order(0)<<'\n';  // 1st element;
cout<<"*os.find_by_order(3)--> "<<*os.find_by_order(3)<<'\n'; //4th elemt   it will output 0 as there are no 4th elemnt 

cout<<"os.order_of_key(2)--> "<<os.order_of_key(2)<<'\n'; // number of lement less than 2

cout<<"*os.lower_bound(2)--> "<<*os.lower_bound(2)<<'\n';
cout<<"*os.lower_bound(3)--> "<<*os.lower_bound(3)<<'\n';

cout<<"*os.upper_bound(2)--> "<<*os.upper_bound(2)<<'\n';

os.erase(2);
cout<<'\n';
for(auto &it:os){
    cout<<it<<'\n';
}
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}