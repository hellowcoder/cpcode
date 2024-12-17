#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int x;
cin>>x;
if(x==1){
    cout<<"0"<<endl;
}else if(x==2){
    cout<<"01"<<endl;
}else{
vector<int>v(x+1);
for(int i=1;i<=x;i++){
     if(i==2){
        v[i]=1;
     }else{
        v[i]=0;
     }
}
for(int i=1;i<=x;i++){
    cout<<v[i];
}
cout<<endl;
}
}

}