#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

for(int k=1;k<=n;k++){
long long int x,y;
cin>>x>>y;
long long int arr[x],mini=INT_MAX;
for(int i=0;i<x;i++){
   
    cin>>arr[i];
    mini=min(mini,arr[i]);
}
int ride;
if(x==1){
    ride=1;
}else{
    ride=2*(x-1)-1;
}
long long int cost=ride*mini;
if(cost<=y){
    cout<<"Case #"<<k<<": YES"<<endl;
}else{
    cout<<"Case #"<<k<<": NO"<<endl;
}

}
}

