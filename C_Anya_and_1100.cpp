#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;


int main(){
int n; //number of test cases.
cin >>n;
 string k="1100";
while(n--){
string s;cin>>s;
int x;cin>>x;
   while(x--){
    int a,b;cin>>a>>b;
    if(s.size()<=3){cout<<"NO"<<endl;}else{
    a--;s[a]= '0'+b;
    size_t hi=s.find(k);
    if(hi !=  string::npos){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}}
}
}
 
}