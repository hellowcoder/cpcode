// Author: sandeep172918
// Date: 2024-12-01 20:49:32
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
int x;cin>>x;int v[x+1][x+1];
fr1(i,x){
    fr1(k,x){
        cin>>v[i][k];
    }
}
int result=0;
fr1(i,x){
int mini=INT_MAX;
int k=1,j=i;
while(true){
    int o=v[k][j];
    mini=min(mini,o);
    if(k==x || j==x){
        break;
    }
    k++;j++;
}
if(mini<0){
    result+=mini;
}
}

for(int i=2;i<=x;i++){
int mini=INT_MAX;
int k=i,j=1;
while(true){
    int o=v[k][j];
    mini=min(mini,o);
    if(k==x || j==x){
        break;
    }
    k++;j++;
}
if(mini<0){
    result+=mini;
}
}

cout<<result*(-1)<<endl;




}
 
}