#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
int arr[n];
int sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
int count=0;

for(int i=0;i<n;i++){
  sum-=arr[i];
  if(sum/2==arr[i]){
    count++;
  }
}
}

