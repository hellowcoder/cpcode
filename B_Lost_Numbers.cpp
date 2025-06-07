//Author: sandeep172918
//Date: 2025-06-06 15:46

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
//vector<lli>v(7);
// void check(lli n,lli i,lli j){
// if(n%23==0){
//  v[i]=23;
//  v[j]=n/23;
// }else if(n%7==0){
//  v[i]=42;
//  v[j]=n/42;
// }else if(n%5==0){
//  v[i]=15;
//  v[j]=n/15;
// }else{
//     lli c=(lli)log2(n);
//     if(c==5){
//       v[i]=4;
//       v[j]=8;
//     }else if(c==6){
//       v[i]=4;
//       v[j]=16;
//     }else{
//         v[i]=16;
//         v[j]=8;
//     }
// }
// }

void solve(){
// lli n,k;cin>>n>>k;
//get(v,k);
vec(a,4,0);
vec(v,6,0);
v={4,8,15,16,23,42};
cout<<"? 1 2\n";
cout.flush();
cin>>a[0];

cout<<"? 2 3\n";
cout.flush();
cin>>a[1];

cout<<"? 3 4\n";
cout.flush();
cin>>a[2];

cout<<"? 4 5\n";
cout.flush();
cin>>a[3];
lli n;
while(true){
    n=1;
    fr(i,4){
        if(v[i]*v[i+1] != a[i]){
            n=0;
        }
    }
    if(n)break;
    next_permutation(all(v));
}
cout<<"! ";
//next_permutation(all(v));
out(v)<<" ";
cout<<'\n';
cout.flush();
}

int32_t main(){
fastio;
solve();
}