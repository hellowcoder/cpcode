// Author: sandeep172918
// Date: 2024-12-02 21:36:48
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
lli tt; //number of test cases.
cin >>tt;
 
while(tt--){
string s;cin>>s;int count1=0,count0=0;
fr(i,s.size()){
    if(s[i]=='1'){
      count1++;
    }
    if(s[i]=='0'){
      count0++;
    } 

}int count=0;
fr(i,s.size()){
  if(s[i]=='1'){
    count0--;
    if(count0>=0){
        count++;
    }else{
        break;
    }
  }
  if(s[i]=='0'){
    count1--;
    if(count1>=0){
        count++;
    }else{
        break;
    }
  }
}
cout<<s.size()-count<<endl;
}
 
}