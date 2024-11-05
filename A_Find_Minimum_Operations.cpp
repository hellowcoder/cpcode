#include <bits/stdc++.h>
using namespace std;
long long int check(long long int y,long long int z){
    long long int k;
for(long long int i=1;i<INT_MAX;i++){
      if(y<pow(z,i)){
         k=(i-1);
         break;
      }else if(y==pow(z,i)){
        k=i;
        break;
      }else{
        continue;
      }
     }
     return k;
}    
int main(){
long long int x;
cin >>x;
for(long long int g=1;g<=x;g++){
    long long int y,z,a,count=0;
    cin >> y>>z;
    if(z==1){
        cout <<y<<endl;
        
    }else{
    while(y>=0){
        long long int k=check(y,z);
        a=y-pow(z,k);
        count++;
        y=a;
    }
    cout <<count-1<<endl;
    }
}
}

