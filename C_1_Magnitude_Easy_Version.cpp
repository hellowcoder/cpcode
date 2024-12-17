#include <bits/stdc++.h>
#define fr(i,n) for(long long int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
lli x;cin>>x;vector<lli>v(x);fr(i,x){cin>>v[i];}lli sum=0;
fr(i,x){
sum+=v[i];
if(sum<0 && v[i+1]<0){
    sum=sum;
}else
 sum=abs(sum);
}
cout<<abs(sum)<<endl;
}
 
}