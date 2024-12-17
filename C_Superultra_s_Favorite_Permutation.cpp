// Author: sandeep172918
// Date: 2024-11-18 01:20:34
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

bool check(lli m){
    for(int i=2;i*i<=m;i++){
        if(m%i==0){
            return true;
        }
    }
    return false;
}
int main(){
lli T; //number of test cases.
cin >>T;
 
while(T--){
int x;cin>>x;
if(x<=4)  cout<<"-1"<<endl;
else{
int k=((x%2)?x:x-1);

lli n;
for(int i=2;i<=x;i+=2){
    lli m=i+k;
    if(check(m)){
        n=i;
        break;
    }
}

for(int i=1;i<=x;i+=2){
    cout<<i<<" ";
}cout<<n<<" ";
for(int i=2;i<=x;i+=2){
    if(i==n) continue;
    else cout<<i<<" ";
}cout<<endl;
}
}
 
}