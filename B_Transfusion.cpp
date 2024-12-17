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
lli x;cin>>x;lli even=0,odd=0;lli e=x/2;lli o=x-e;
fr1(i,x){
    lli y;cin>>y;
    if(i%2)  odd+=y;
    else   even+=y;

    
}
if((odd/o==even/e)&& (odd%o==0 )&&(even%e==0)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
 
}