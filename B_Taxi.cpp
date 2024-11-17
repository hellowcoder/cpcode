#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
int c1,c2,c3,c4,flag;
c1=c2=c3=c4=0;
while(n--){
int x;
cin>>x;
if(x==1)
c1++;
else if(x==2)
c2++;
else if(x==3)
c3++;
else
c4++;
}
c2*=2;
int ans=(c4+c3);
if(c1>c3){
    ans+=(c2/4);
    if(c2%4==2 ){
       ans++;
       if((c1-c3)<3){
        flag=1;
       }else{
        if((c1-c3-2)%4==0){
            ans+=((c1-c3-2)/4);
        }else{
            ans+=(((c1-c3-2)/4)+1);
        }
       }
    }
    else if(c2%4==0){
        if((c1-c3)%4==0){
            ans+=(c1-c3)/4;
        }else{
            ans+=(((c1-c3)/4)+1);
        }

    }
   
}else{
   if(c2%4==0){
    ans+=(c2/4);
   }else{
    ans+=((c2/4)+1);
   } 
}
cout<<ans<<endl;

}