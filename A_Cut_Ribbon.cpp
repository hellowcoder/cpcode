#include <bits/stdc++.h>
#define fr(i,n) for(int i=1;i<=(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int dp(int t,int a,int b,int c){
   vector<int>dpp(t+1,-1);
   dpp[0]=0;
   fr(i,t){
    if(i>=a && dpp[i-a]!=-1){
      dpp[i]=max(dpp[i],dpp[i-a]+1);
    }
    if(i>=b && dpp[i-b]!=-1){
      dpp[i]=max(dpp[i],dpp[i-b]+1);
    }
    if(i>=c && dpp[i-c]!=-1){
      dpp[i]=max(dpp[i],dpp[i-c]+1);
    }
   }
   return dpp[t];
}
int main(){
int t,a,b,c;cin>>t>>a>>b>>c;
cout<<dp(t,a,b,c);
}