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

while(T--){
int x;cin>>x;vec(v,x+1);fr1(i,x){cin>>v[i];}
int flag=1;
fr1(i,x){
    if(abs(v[i]-i)>1){
        flag=0;
        break;
    }else{
        flag=1;
    }
}
if(flag){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
 
}