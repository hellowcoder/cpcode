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
lli x;cin>>x;vec(v,x);

fr(i,x){
  cin>>v[i];
  }
  if(x==1){
    cout<<"0"<<endl;
  }else{
lli maxc=0,curc=1;
frs(i,1,x){
  if(v[i]==v[i-1]){
    curc++;
  }else{
    curc=1;
  }
  maxc=max(maxc,curc);
}
cout<<x-maxc<<endl;
}
}
 
}