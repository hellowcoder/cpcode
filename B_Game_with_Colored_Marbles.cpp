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
lli x;cin>>x;
map<int,int>m;
fr(i,x){
    int y;cin>>y;
    m[y]++;
}
set<pair<int,int>>s;
for(auto i: m){
    s.insert({i.second,i.first});
}int ans=0,count =0,target=((x%2)?(x/2+1):(x/2));
for(auto i: s){
    count+=i.first;
    if(count>target){
        ans++;
        break;
    }else{
        ans+=2;
    }
    if(count==target){
        break;
    }

}
 cout<<ans<<endl;
}}
