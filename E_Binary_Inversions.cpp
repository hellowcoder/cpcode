//Author: sandeep172918
//Date: 2025-05-26 09:16

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
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void merge_merge(vector<lli>&v,lli low,lli mid,lli high,lli& c){
  //cout<<low<<" "<<mid<<" "<<high<<'\n';
  lli i=low,j=mid+1;
  vect(temp);
  while(i<=mid && j<=high){
     if(v[i]<=v[j])temp.psb(v[i++]);
     else {
      temp.psb(v[j++]);
            c+=(mid-i+1);  //modified to count number of inversion.....
     }
  }
  while(i<=mid)temp.psb(v[i++]);
  while(j<=high)temp.psb(v[j++]);
  i=low;
  for(lli &it:temp){
    //cout<<it<<" ";
    v[i++]=it;
  }//cout<<'\n';
}

void merge_split(vector<lli>&v,lli low,lli high,lli& c){
    if(low==high)return;
    lli mid=(low+high)/2;
    merge_split(v,low,mid,c); // these are not actually splitting.................... from them i only need mid
    merge_split(v,mid+1,high,c);
    merge_merge(v,low,mid,high,c);
}
//binary search lagale bete
void solve(){
lli x;cin>>x;get(v,x);
lli c1=0,c2=0;
lli low=0,high=x-1;
auto a=v;
auto b=v;
merge_split(a,low,high,c1);
fr(i,x){
    if(v[i]==(1-1)){
        v[i]=1;
        break;
    }

}
low=0,high=x-1;
merge_split(v,low,high,c2);
c1=max(c1,c2);
lli c3=0;
rfr(i,x-1,0){
    if(b[i]==1){
        b[i]=0;
        break;
    }
}
low=0,high=x-1;
merge_split(b,low,high,c3);
cout<<max(c1,c3)<<'\n';
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}