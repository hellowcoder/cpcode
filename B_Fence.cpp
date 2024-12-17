#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b; //number of test cases.
cin >>a>>b;
int arr[a],sum_arr[a],sum=0;
for(int i=0;i<a;i++){
   cin>>arr[i];
   
}

for(int i=0;i<b;i++){
   sum+=arr[i];
}
sum_arr[0]=sum;
int ans=INT_MAX;
for(int i=1;i<=a-b;i++){
    sum_arr[i]=sum_arr[i-1]-arr[i-1]+arr[i+b-1];
    
}
int index;
for(int i=0;i<=a-b;i++){
    ans=min(ans,sum_arr[i]);
    if(ans==sum_arr[i]){
        index=i;
    }
}
cout<<index+1;
}