#include <bits/stdc++.h>
using namespace std;
int ans(int n);
int main(){
int x;
cin>>x;
for(int i=1;i<=x;i++){
    int y;
    cin>>y;
    if(y/100==0){
        int c=y%10;
        cout <<c<<endl;
    }
    else if(y/100 !=0){
     int d=ans(y);
     cout<<d<< endl;

    }
    
}
}
int ans(int n){
    int smalldig=INT_MAX;
     while(n!=0){
            int d=n%10;
            
            smalldig=min(smalldig,d);
            
            n/=10;
        }
        return smalldig;
}