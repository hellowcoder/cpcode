// Author: sandeep172918
// Date: 2024-12-04 11:41:22

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
lli tt;cin >>tt;while(tt--){
lli x;cin>>x;lli sum=0;lli k=INT_MIN;vec(a,x);vec(b,x);fr(i,x){cin>>a[i];}fr(i,x){cin>>b[i];sum+=max(a[i],b[i]);k=max(k,min(a[i],b[i]));}
cout<<sum+k<<endl;}}


 
