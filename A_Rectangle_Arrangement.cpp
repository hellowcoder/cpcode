#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
int x;
cin>>x;
int mini_a=INT_MIN,mini_b=INT_MIN;
while(x--){
   int a,b;cin>>a>>b;
   mini_a=max(mini_a,a);
   mini_b=max(mini_b,b);
}
cout<<2*(mini_a+mini_b)<<endl;
}
 
}