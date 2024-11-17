#include <bits/stdc++.h>
#define fr(i,n) for(long long int i=0;i<(n);i++)
#define lli long long int
#define rsrt(v) sort(v.rbegin(),v.rend())
using namespace std;
int main(){
lli n; //number of test cases.
cin >>n;
 
while(n--){
lli x;
cin>>x;
vector<lli>v(x);
fr(i,x){
    cin>>v[i];
}
if(x==1){
    cout<<"1"<<endl;
}else if(x==2){
    cout<<v[1]-v[0]<<endl;
}else{
    vector<lli>y;
    for(lli i=1;i<x;i++){
        lli k= v[i]-v[i-1];
        y.push_back(k);
    }
 rsrt(y);
 
 cout<<y[1]<<endl;
}
}
 
}