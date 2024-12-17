#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n,m,k; //number of test cases.
cin >>n>>m>>k;
vector<int>v(m);
fr(i,m){
    cin>>v[i];
} 
int x;cin>>x;
int count=0;
fr(i,m){
    int d=v[i];
    int h=(x^d);
    int a=__builtin_popcount(h);
    if(a<=k){
    count++;
   }
}
cout<<count; 
}