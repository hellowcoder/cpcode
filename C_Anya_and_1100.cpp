// Author: sandeep172918
// Date: 2024-11-22 19:46:17
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<=(n);i++)
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
int n; //number of test cases.
cin >>n;
 string k="1100";
while(n--){
string s;cin>>s;
int x;cin>>x;
     set<int>pos;
    if(s.size()>=4){
      
    fr(i,s.size()-4){
    if(s.substr(i,4)==k){
        pos.insert(i);
    }
    }
    }
 while(x--){
    int a,b;cin>>a>>b;if(s.size()<=3){cout<<"NO"<<endl;}else{
    a--;s[a]='0'+b;
    for(int i=max(0,a-3);i<=min(a,(int)s.size()-4);i++){
      if(pos.count(i)){
        if(s.substr(i,4)!=k){
            pos.erase(i);
        }
      }else{
        if(s.substr(i,4)==k){
            pos.insert(i);
        }
      }
    }
    if(pos.size()>0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 }
}

}
 
}