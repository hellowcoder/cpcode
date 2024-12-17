#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
long long int x,y;
cin>>x>>y;
if(y>x){
    cout<<"NO"<<endl;
}else{
    if(y*y<=x){
        if(x%2 == y%2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}
}
}