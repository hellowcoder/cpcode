#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

// void solve(){
// lli x,y;cin>>x>>y;vec(v,x);fr(i,x)cin>>v[i];                                                                                                                                                                                
// srt(v);lli m=v[x-1];
// while(y>0){
// for(lli i=x-2;i>(x/2);i--){
//     while(v[i]!=m && y>0){
//          v[i]++;y--;
//     }
// }
// if(y>0)
// m++;y--;
// }
// cout<<v[x/2+1];
// }
void solve (){
	lli n,k;	
	cin>>n>>k;
	vec(v,n);
    lli ans=-1;
   fr(i,n)cin>>v[i];
	sort(v.begin(),v.end());
	lli low=v[n/2] , high=v[n/2]+k;
	while(low<=high){
	lli mid=low+(high-low)/2;
    lli sum=0;
	frs(i,n/2,n){
	if(v[i]<mid){
	sum+=(mid-v[i]);
    }
    }
	if(sum<=k){
	ans=mid;
	low=mid+1;
    }else{
    high=mid-1;
    
  }
}
cout<<ans<<endl;
}



int main(){
fastio;
solve();
}