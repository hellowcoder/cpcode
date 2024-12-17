#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
lli t,m,r,c;cin>>t>>m>>r>>c;
lli final=0;
final+=(m-c);
final+=((t-r)*(m-1));
final+=((t-r)*(1+(m-1)));
cout<<final<<endl;
}
 
}