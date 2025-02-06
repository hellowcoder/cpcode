#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<=(n);i++)
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
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e18;
vector<lli>pre;

void gener(lli x,lli count){
    if(x>1e18 || count>3) return;  //main thought
    pre.psb(x);
    fr(i,10){
        if(x*10+i>0){
             if(i>0) gener(x*10+i,count+1);   //basic intution dont think of numbers just recussion do thid job
             else gener(x*10+i,count);
         }
    }
}


void solve(){
lli x,y;cin>>x>>y;
cout<<upper_bound(all(pre),y)-lower_bound(all(pre),x)<<'\n';

}
int main(){
fastio;

gener(0,0);
srt(pre);
lli tt;cin>>tt;

while(tt--){
solve();
}
}