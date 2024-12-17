// Author: sandeep172918
// Date: 2024-11-29 09:35:40
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
string s;cin>>s;int flag=1;
frs(i,1,s.size()){
   if(s[i]==s[i-1]){
    cout<<s[i-1]<<s[i]<<endl;
    flag=0;
    break;
   }
   if(i>1){
    if((s[i-2]!=s[i-1]) && (s[i-1]!=s[i]) && (s[i]!=s[i-2])){
        cout<<s[i-2]<<s[i-1]<<s[i]<<endl;
        flag=0;
        break;
    }
   }
}
if(flag){
    cout<<"-1"<<endl;
}

}
 
}