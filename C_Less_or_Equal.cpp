// Author: sandeep172918
// Date: 2024-11-18 18:06:37


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
lli x,y;cin>>x>>y;

vec(v,x);fr(i,x){cin>>v[i];}srt(v);
if(y==0){
  v[0]>1?cout<<"1":cout<<"-1";
}else if(x==1 && y==1){
  cout<<v[0];
}
else{
 if((v[y]-v[y-1])>=1){
        cout<<v[y-1];
}
else{
        cout<<"-1";
 }
}
}    


 
