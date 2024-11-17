#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int a,b,c,d;
int sum=0;
int sum2=0;
cin >>a>>b;
cin>>c>>d;
sum2+=a*(c+d);
sum+=((b*((min(c,d))-1))+a*(max(c,d)-min(c,d)));
sum+=b;
cout<<min(sum,sum2)<<endl;
}

}