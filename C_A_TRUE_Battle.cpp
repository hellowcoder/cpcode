#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int t;
cin>>t;
string s;
cin >>s;

vector<int>v;
for(int i=0;i<t;i++){
    int hi=s[i]-'0';
    v.push_back(hi);
}
int result=v[0];
for(int i=1;i<t;i+=2){
    result=(result & (v[i] | v[i+1]));
}
if(result){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}

