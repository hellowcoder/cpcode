// Author: sandeep172918
// Date: 2024-11-19 13:01:04
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
 int av=0;
while(T--){
char c;int k=0;cin>>c>>k;
if(c=='B'){
   if(k>av){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
 int l=k-av;
    if(l>0){
        av=0;
    }else{
        av=av-k;
    }
   
}
if(c=='P'){
    av+=k;
    
}
}
 
}