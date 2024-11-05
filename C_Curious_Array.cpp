#include <bits/stdc++.h>    //407c
#define fr(i,n) for(int i=1;i<=(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
const lli N =1e9+7;
const lli K=1e5+1;
int fact[K];
void facto(int fact[]){
    fact[0]=1;
   
   for(int i=1;i<K;i++){
    fact[i]=(fact[i-1]*i)%N;
   }
}
lli C(int x, int y){
    return (fact[x]/((fact[y]*fact[x-y])))%N;
}
int main(){
int n,t;
cin >>n>>t;
vector<int>v(n+1);fr(i,n){cin>>v[i];}
while(t--){
int l,r,k;cin>>l>>r>>k;
for(int i=l;i<=r;i++){
    v[i]+=C((i-l+k),k);
}
}
fr(i,n){
    cout<<v[i]<<" ";
} 
}