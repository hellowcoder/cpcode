#include <bits/stdc++.h>
#define fr(i,n) for(long long int i=2;i*i<=(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;

int main(){
lli t; //number of test cases.
cin >>t;
 
while(t--){
lli n;
cin>>n;
lli a,b;
a=b=1;
fr(i,n){
   if((n%i)==0){
    a=i;
    
    break;
   }
}
n/=a;
for(lli i=a+1;i*i<=n;i++){
    if((n%i)==0){
        b=i;
        
        break;
    }
}
n/=b;
if(a==1 || b==1){
    cout<<"NO"<<endl;
}
else if(n >(a>b?a:b)){
    cout<<"YES"<<endl;
    cout<<a<<" "<<b<<" "<<n<<endl;
}else{
    cout<<"NO"<<endl;
}
}
 
}