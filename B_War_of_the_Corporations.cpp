#include <bits/stdc++.h>
using namespace std;
int main(){
  string a,b;cin>>a>>b;int k=b.size();int count=0;
  for(int i=0;i<a.size();i++){
    
    if(a.substr(i,k)==b){
        count++;
        i+=b.size()-1;
    }
    
  }
  cout<<count;
}