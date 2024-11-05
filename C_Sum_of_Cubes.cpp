#include <bits/stdc++.h>
using namespace std;

int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int flag=0;
long long int x;
cin>>x;



for(long long int i=1;i<=10000;i++){
    long long int i_cube=i*i*i;
    if(i_cube>=x){
        break;
    }
    for(long long int k=1;k<=10000;k++){
        long long int k_cube=k*k*k;
        if(i_cube+k_cube > x){
            break;
        }
        if((i_cube + k_cube)==x){
            flag=1;
            break;
        }
    }
    if(flag==1){
        break;
    }
}
if(flag==1){
    cout<<"YES"<<endl;
}else if(flag==0){
    cout<<"NO"<<endl;
}
}

}