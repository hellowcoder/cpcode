#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;


while(n--){
string s,t;
cin>>s;
cin>>t;
int x=min(s.size(),t.size());
int time=0;
for(int i=0;i<x;i++){
   if(s[i]==t[i]){
    time++;
    continue;
   }else{
    break;
   }
}
int result=time;
if(time>0){
    result++;
}
result+=(s.size()-time);
result+=(t.size()-time);
cout<<result<<endl;
}


}