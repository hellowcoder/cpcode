#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b; //number of test cases.
cin >>a;
cin>>b;
int flag=0;
while(a!=0 &&b!=0){
  int c=a%10;
  int d=b%10;
  if((c+d )>9){
    cout<<"NO"<<endl;
    break;
  }
  if(c==0 &&d!=0){
     cout <<"NO"<<endl;
     break;
  }
  if(c!=0 && d==0){
    cout <<"NO"<<endl;
    break;
  }
  if(c==0 && d==0){
    cout<<"YES"<<endl;
    break;
  }

a/=10;
b/=10;
}

}