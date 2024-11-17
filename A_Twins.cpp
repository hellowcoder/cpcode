#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
vector<int>arr(n);
int sum=0,count=0,sum2=0;
for(int i=0;i<n;i++){
 cin>>arr[i];
 sum+=arr[i];
}
sum/=2;
sort(arr.rbegin(),arr.rend());
for(int i=0;i<n;i++){
    sum2+=arr[i];
    if(sum2<=sum){
        count++;
    }else{
        break;
    }
}
cout<<count+1<<endl;
}