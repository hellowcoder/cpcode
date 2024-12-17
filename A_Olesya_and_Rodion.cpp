// Author: sandeep172918
// Date: 2024-11-29 09:57:42
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
int a,b;cin>>a>>b;
if(a==1 && b<10){
    cout<<b;
}else if(a==1 && b==10){
    cout<<"-1";
}else{
    if(b==10){
        cout<<10;
        fr1(i,a-2){
            cout<<"0";
        }
    }else{
        cout<<b;
        fr1(i,a-1){
            cout<<"0";
        }
    }
}
}