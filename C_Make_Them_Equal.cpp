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
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
using namespace std;
const int MOD=1e9+7;
int main(){
lli tt; //number of test cases.
cin >>tt;
 
while(tt--){
int n;char c;cin>>n>>c;vector<int>v;string s;cin>>s;
fr(i,n){
    
    if(s[i] != c){
        v.psb((i+1)%n);
    }
}
if(v.empty()) cout<<"0"<<endl;
else{
lli k = mxe(v);
lli c0 = count(v.begin(),v.end(),0);
if(k==0){
    cout<<"1"<<endl<<n-1<<endl;
}else{
    if(c0){
        cout<<"2"<<endl<<n-1<<" "<<n<<endl;  // gadbad hai
    }else{
        cout<<"1"<<endl<<n<<endl;
    }
}
}
}
 
}