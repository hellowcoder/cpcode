// Author: sandeep172918   https://codeforces.com/problemset/problem/1927/C
// Date: 2024-12-02 22:06:54
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
using namespace std;
const int MOD=1e9+7;

int main(){
lli tt; //number of test cases.
cin >>tt;
 
while(tt--){
lli n,m,k;cin>>n>>m>>k;vector<lli>vm(k+1,0);vector<lli>vn(k+1,0);lli countm=0,countn=0,count=0;
fr1(i,n){
    lli x;cin>>x;
    if(x<=k){
        vn[x]=1;
    }
}
fr1(i,m){
    lli x;cin>>x;
    if(x<=k){
        vm[x]=1;
    }
}
fr1(i,k){
  if(vm[i]){
    countm++;
  }
}
}
 
}