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
lli x;cin>>x;vec(v,x);fr(i,x){cin>>v[i];}vector<lli>even;vector<lli>odd;
fr(i,x){
   if(i%2){
    even.push_back(v[i]);
   }else{
    odd.push_back(v[i]);
   }
}
lli o=accumulate(odd.begin(),odd.end(),0);
lli e=accumulate(even.begin(),even.end(),0);
if((o/odd.size() == e/even.size())&& ((o%odd.size())==0)&&((e%even.size())==0)){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
 
}