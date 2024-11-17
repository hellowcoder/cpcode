#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
int x;cin>>x;
if(x==1){cout<<"-1"<<endl;}
else if(x==2){cout<<"66"<<endl;}
else if(x==3){cout<<"-1"<<endl;}
else{
if(x%2==0){
    fr(i,(x-2)){
        cout<<"3";
    }
    cout<<"66";
    cout<<endl;
}else{
   fr(i,(x-4)){
    cout<<"3";

   }
   cout<<"6366";
   cout<<endl;
}




}
}
 
}