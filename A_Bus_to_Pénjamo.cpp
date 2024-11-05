#include <bits/stdc++.h>
using namespace std;
int main(){
int t; //number of test cases.
cin >>t;

while(t--){
int n,r;
cin>>n>>r;
int arr[n];
int sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];    
}
int result=0;
if(sum==2*r){
    for(int i=0;i<n;i++){
        result+=2*(arr[i]/2);
    }
}else{
     for(int i=0;i<n;i++){
        if(arr[i]==1){
            result++;
        }else{
          result+=2*(arr[i]/2);
        }
    }
     }

cout<<result<<endl;
}
}

