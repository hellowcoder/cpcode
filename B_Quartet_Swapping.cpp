//Author: sandeep172918
//Date: 2025-05-12 07:07

#include <bits/stdc++.h>
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
vect(odd);vect(even);
fr(i,x){
    if(i%2)odd.psb(v[i]);
    else even.psb(v[i]);
}
lli inv_odd=0,inv_even=0;
merge_split(odd,0,odd.size()-1,inv_odd);
merge_split(even,0,even.size()-1,inv_even);
lli check=(inv_odd+inv_even)%2;
if(check){
 if(x%2){
     lli k=even.size();
    swap(even[k-1],even[k-2]);
 }else{
     lli k=odd.size();
    swap(odd[k-1],odd[k-2]);
 }
}

lli k=0,j=0;
fr(i,x){
    if(i%2){
      cout<<odd[k++]<<" ";
    }else{
        cout<<even[j++]<<" ";
    }
}
cout<<'\n';

}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}