// Author: sandeep172918
// Date: 2024-11-19 22:56:42

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
int game(int  a,int b){
    if(a>b) return 1;
    if(a==b) return 0;
    if(a<b) return -1;
}
int main(){
lli T; //number of test cases.
cin >>T;

while(T--){
int a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
int total=0;
if((game(a1,b1)+game(a2,b2))>=1){
    total++;
}
if((game(a1,b2)+game(a2,b1))>=1){
    total++;
}
if((game(a2,b1)+game(a1,b2))>=1){
    total++;
}
if((game(a2,b2)+game(a1,b1))>=1){
    total++;
}
cout<<total<<endl;
}
}