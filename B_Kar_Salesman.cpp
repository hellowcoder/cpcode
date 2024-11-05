#include <bits/stdc++.h>
using namespace std;
 int main(){
long long int n; //number of test cases.
cin >>n;

while(n--){
    long long int x,y;
    cin>>x>>y;
    long long int sum=0;
    long long int maxi=INT_MIN;
  long long int arr[x];
  for(long long int i=0;i<x;i++){
    cin>>arr[i];
    sum+=arr[i];
    maxi=max(maxi,arr[i]);
  }
  long long int result=(sum+y-1)/y;
  cout<<max(maxi,result)<<endl;
}

}
