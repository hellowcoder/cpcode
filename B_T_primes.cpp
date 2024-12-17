#include <bits/stdc++.h>
using namespace std;
long long int prime(long long int x){
    if(x==2 || x==3){
        return 1;
    }else if(x==1){
        return 0;
        } else{
    for(long long int i=2;i*i<=x;i++){
        if(x%i==0){
            return 0;
            break;
        } 
        }

        return 1;
    }
    }

long long int square(long long int x){
    int flag=0;
    for(long long int i=1;i<=x;i++){
        if(i*i==x){
            long long int k=sqrt(x);
            if(prime(k)){
            flag=1;
            break;
            }
        }
        else if(i*i>x){
            break;
        }
    }
    return flag;
}
int main(){
int n; //number of test cases.
cin >>n;
long long int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    long long int y=arr[i];
    if(square(y)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
 
}
