// Author: sandeep172918
// Date: 2024-11-19 22:22:28
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
lli T; //number of test cases.
cin >>T;
 
while(T--){
lli n,s,m;cin>>n>>s>>m;
vector<pair<lli,lli>>v(n);
fr(i,n){
    cin>>v[i].first>>v[i].second;
}
lli maxi=max((v[0].first-0),(m-v[n-1].second));
frs(i,1,n){
  lli k=v[i].first-v[i-1].second;
  maxi=max(maxi,k);
}
if(maxi>=s){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
 
}