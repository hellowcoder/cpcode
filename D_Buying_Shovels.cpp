#include <bits/stdc++.h>
#define fr(i,n) for(long long  i=2;i*i<=(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
lli x,y;
cin>>x>>y;
int flag=0;
if(y>=x){
    cout<<"1"<<endl;
}
else{
    
   fr(i,x){
    if((x/i <= y)&& (x%i==0)){
        cout<<i<<endl;
        flag=0;
        break;
    }else{
        flag=1;
    }
   }
  
 

}

if(flag){
    cout<<x<<endl;
}
}
 
}



