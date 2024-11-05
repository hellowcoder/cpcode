#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
string s;
cin>>s;
if(s.size()<=10){
    cout<<s<<endl;
}else{
    int k=s.size()-2;
    cout<<s[0]<<k<<s[s.size()-1]<<endl;
}
}
 
}