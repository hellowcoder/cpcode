// Author: sandeep172918
// Date: 2024-12-05 22:41:12
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
#define mne(v)  *min_element(v.begin(),v.end())
using namespace std;
const int MOD=1e9+7;
int main(){
lli tt; //number of test cases.
cin >>tt;
 
while(tt--){
string s;cin>>s;lli digitsum=0;lli c2=0,c3=0;
fr(i,s.size()){
  int k=s[i]-'0';
  if(k==2) c2++;
  if(k==3)  c3++;

  digitsum+=k;

}
lli x=digitsum%9;
if(!x) cout<<"YES"<<endl;
else{
    
    
}

}
 
}