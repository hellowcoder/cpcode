#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
double x;
cin>>x;
double y=360.0/(180.0-x);
int k=y;
if(k==y){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}

}