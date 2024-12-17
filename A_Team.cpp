#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
int count=0;
while(n--){
    int sum=0;
int a,b,c;cin>>a>>b>>c;sum+=(a+b+c);if(sum>=2){count++;}
}
 cout<<count<<endl;
}