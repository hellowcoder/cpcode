#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
    int arr[3];
for(int i=0;i<3;i++){
    cin>>arr[i];
}

int d=arr[1]/3;
int e=arr[1]%3;
if(arr[2]<e){
    cout<<"-1";
    break;
}
int f=(e+arr[2])/3;
int g=(e+arr[2])%3;

int ans=arr[0]+d+f+g;
cout<<ans<<endl;6
}

}