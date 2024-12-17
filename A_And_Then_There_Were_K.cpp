#include <bits/stdc++.h>
#define fr(i,n) for(long long int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
lli x;
cin>>x;
lli count=0;
while(x){
    count++;
    x/=2;
}
cout<<(1<<(count-1))-1<<endl;
}
 
}