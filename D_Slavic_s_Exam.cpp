// Author: sandeep172918
// Date: 2024-11-19 23:00:11
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
using namespace std;
const int MOD=1e9+7;
int main(){
lli T; //number of test cases.
cin >>T;
 int flag;
while(T--){
string a,b;cin>>a>>b;int k=0;
fr(i,a.size()){
    if(k==b.size()){
       break;
    }
    
    if(a[i]==b[k]){
        flag=1;
        k++;
    }else if(a[i]=='?'){
        a[i]=b[k];
        k++;
        flag=1;
    }else{

        flag=0;
    }
    if((k<=b.size()-1)){
        flag=0;
        
    }
}
fr(i,a.size()){
    if(a[i]=='?'){
        a[i]='a';
    }
}

if(flag){
    cout<<"YES"<<endl;
    cout<<a<<endl;
}else{
cout<<"NO"<<endl;
}
}
 
}