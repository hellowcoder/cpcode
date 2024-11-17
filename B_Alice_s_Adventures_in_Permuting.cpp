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
lli n,d,a;cin>>n>>d>>a;
if((!d) && (!a)){
    if(n<=2)  cout<<"0"<<endl;
    else cout<<"-1"<<endl;
}else if(d==0){
    if(a<n){
        cout<<n-1<<endl;
    }else{
        cout<<n<<endl;
    }
}else if(a>=n){
    cout<<n<<endl;
}else{
    lli k=((n-a)%d)?((n-a)/d+1):((n-a)/d);
    lli m=n-k;
    if(m>=0){
        cout<<m<<endl;
    }
}
}
 
}