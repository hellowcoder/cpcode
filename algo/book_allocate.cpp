//Author: sandeep172918
//Date: 2025-04-26 23:05

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

void solve(){

}


class Solution {
private:
  int cal(vector<int>&v,int mid){
    int total=1;
    int page=0;
    for(int i=0;i<v.size();i++){
        if(page+v[i]<=mid){
            page+=v[i];
        }else{
            total++;
            page=v[i];
        }
    }

    return total;
  }    
public:
    int splitArray(vector<int>& v, int k) {
     int n=v.size();
     int low=*max_element(v.begin(),v.end());
     int high=accumulate(v.begin(),v.end(),0);
     int ans=0;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(cal(v,mid)>k){
            low=mid+1;
        
        }else{
           high=mid-1;
        }
     }
     return low;
    }
};
int32_t main(){
    fastio;
    lli tt;cin>>tt;
    while(tt--){
    solve();
    }
    }