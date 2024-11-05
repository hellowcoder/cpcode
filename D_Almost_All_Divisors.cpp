#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
    int x;
    cin>>x;
    long long int arr[x];
    long long int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<x;i++){
        cin>>arr[i];
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);

    }
    long long int d=mini*maxi;
    cout<<d<<endl;

}

}