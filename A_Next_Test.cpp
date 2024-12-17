#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
if(n==1){
    int x;
     cin>>x;
     if(x==1){
        cout<<"2";
     }else{
        cout<<"1";
     }
}else{

vector<int>v(n);
fr(i,n){
    cin>>v[i];
} 
srt(v);
if(v[0]!=1){
    cout<<"1";
}else{
int flag=0;
for(int i=0;i<n-1;i++){
  if((v[i+1]-v[i])!=1){
    cout<<v[i]+1;
    flag=0;
   break;
  }else{
    flag=1;
  }
}
if(flag){
    cout<<v[n-1]+1;
}
}
}
 
}