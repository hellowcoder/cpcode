#include <bits/stdc++.h>
using namespace std;
int main(){
int n,check; //number of test cases.
cin >>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
    arr[i]=arr[i]%2;
}
int ct_0 = count(arr.begin(),arr.end(),0);
int ct_1 = count(arr.begin(),arr.end(),1);
if(ct_0 == 1){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<i+1;
            break;
        }
    }
}
if(ct_1== 1){
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cout<<i+1;
            break;
        }
    }
}
}