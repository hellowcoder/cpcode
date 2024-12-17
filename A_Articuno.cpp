#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
int count=0;
for(int i=1;i<=n;i++){
    int x,y;
    cin>>x>>y;
    if(x<0){
        count++;
    }
}
if(count==1){
    cout<<"Yes";
} else if(count==0){
    cout<<"Yes";
}else if(count==n){
  cout<<"No";
}else{
    cout<<"No";
}
}