#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
const int k=1e9;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int x,y;cin>>x>>y;
int ans=y;
while(true){
   ans+=(y/x);
   if(y/x==0){
    break;
   }
    y=(y/x)+(y%x);
}


cout<<ans<<endl;
}
 
}