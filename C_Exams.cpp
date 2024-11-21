// Author: sandeep172918
// Date: 2024-11-20 19:41:46
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
 vector<pair<lli,lli>>v(tt);
 fr(i,tt){
    cin>>v[i].first>>v[i].second;
 }
srt(v);
int flag=1;
frs(i,1,tt){
    if(v[i].second<v[i-1].second){
        flag=0;
        break;
    }
}
if(flag){
    cout<<v[tt-1].second;
}else{
    cout<<v[tt-1].first;
}

 
}