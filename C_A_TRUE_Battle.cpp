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
int size=(t%2?(t/2):((t/2)-1));
int ans1;
vector<int>w;
for(int i=0;i<=size;i++){
    i*=2;
  ans1=v[i]&v[i+1];
  w.push_back(ans1);
}
int ans2=w[0];
for(int i=1;i<w.size();i++){
    ans2=ans2 | w[i];
}

if(ans2){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}

}