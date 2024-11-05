#include <bits/stdc++.h>
using namespace std;
int check(int k,int l){
    int j=-1;
  for(int i=0;i<INT_MAX;i++){
    int u=k+pow(2,i);
    if(u<l){
        j++;
    }
  }
  return j;
}
int main(){
int n; //number of test cases.
cin >>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
for(int i=1;i<n;i++){

  int m=check(i,n);
  int p=i+pow(2,m);
  cout<<m<<endl;
  
}
}