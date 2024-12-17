// Author: sandeep172918
// Date: 2024-11-18 19:25:27
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
pair<lli,lli> count(lli x){
    lli final=0;lli sq=0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){ 
             final++;

        }   
        sq++;
    }
    return {final,sq};
}
int main(){
lli T; //number of test cases.
cin >>T;
 
while(T--){
lli x;cin>>x;
pair<lli,lli>v=count(x);
if(v.second*v.second==x){
    cout<<v.first*2-1<<endl;
}else{
    cout<<v.first*2<<endl;
}
}
 
}