// Author: sandeep172918
// Date: 2024-12-05 21:51:24
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
int n,m;cin>>n>>m;vec(v,n);
fr(i,n){
 string s;cin>>s;
 v[i]=(int)s.size();
}int ans=0;
fr(i,n){
  if(m>=v[i]){
    m-=v[i];
    ans++;
  }else{
    break;
  }
}
cout<<ans<<endl;
}}