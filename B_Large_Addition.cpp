#include <bits/stdc++.h>
#define fr(i,n) for(int i=1;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
string x;cin>>x;
int k=x.size()-1;
int count=0;
fr(i,k){
 if(x[i]=='0'){
    count++;
 }
}
if((x[k]=='9')||(x[0]!='1')){
    cout<<"NO"<<endl;
}else{
    if(count==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
}
} 
