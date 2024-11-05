#include <bits/stdc++.h>
using namespace std;
const long long int N = 1e9+7;
long long int factorial(long long int x){
    if(x==0 || x==1){
        return 1;
    }
    return x*factorial(x-1);

}
 long long int ncr(long long int x, long long int y){
   return (factorial(x)/(factorial(y)*factorial(x-y)));
 }
 int main(){
long long int n; //number of test cases.
cin >>n;

long long int x[n],y[n];
long long int arr[100000];
arr[0]=1;
for(int i=1;i<=100000;i++){
    arr[i]=arr[i-1]*2;
    arr[i]%=N;
}
for(long long int i=1;i<=n;i++){
    cin>>x[i];
}
for(long long int i=1;i<=n;i++){
    cin>>y[i];
    long long int z=y[i];
    cout<<arr[z]<<endl;
}


}

 
 