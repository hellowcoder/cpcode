// Author: sandeep172918
// Date: 2024-12-03 13:06:00
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
lli x;cin>>x;vec(a,x);vec(b,x);fr(i,x){cin>>a[i];}fr(i,x){cin>>b[i];}vec(sum,x);
fr(i,x){
    sum[i]=a[i]+b[i];
}
lli maxi=mxe(sum);lli index;
fr(i,x){
    if(sum[i]==maxi){
        index=i;
    }
}
fr(i,x){
    if(i!=index){
        maxi+=max(a[i],b[i]);
    }
}
cout<<maxi<<endl;
}
 
}