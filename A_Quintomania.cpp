#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
int x;cin>>x;vector<int>v(x);fr(i,x){
cin>>v[i];
}int flag=1;
for(int i=1;i<x;i++){
    int k=abs(v[i]-v[i-1]);
    if(k!=7 && k!=5){
        flag=0;
        break;
    }
}
if(flag==1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
 
}