#include <bits/stdc++.h>
using namespace std;
int main(){
long long int a,b; //number of test cases.
cin >>a>>b;
long long int c=(a%2?(a/2+1):(a/2));
if (b<=c){
    cout<<2*b-1;
}else{
    b=b-c;
    cout<<2*b;
}


}