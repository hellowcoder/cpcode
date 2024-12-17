// Author: sandeep172918
// Date: 2024-11-23 16:10:01
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
lli x;cin>>x;vec(v,x);fr(i,x){cin>>v[i];}lli current=0;
fr(i,x){
    lli k=v[i];
   while((k&1)==0){
    current++;
    k/=2;
   }
}
lli large= (int)log2(x);
lli result=0;int flag=0;
if(current>=x){
    cout<<"0"<<endl;
}else{
    while(current<x){
        if(large<=0){
            flag=1;
            break;
        }
        current+=large;
        result++;
        large--;
    }
    if(flag){
        cout<<"-1"<<endl;
    }else{
        cout<<result<<endl;
    }
}
}
 
}