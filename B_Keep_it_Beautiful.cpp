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
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli x;cin>>x;vec(v,x);fr(i,x)cin>>v[i];
if(x==1) {cout<<"1 \n";return;}
string s="11";bool rot=true;vector<lli>ans;ans.psb(v[0]);ans.psb(v[1]);
frs(i,2,x){
if(rot){
    if(v[0]<=v[1]){
       if(v[i]>=ans.back()){
        s+="1";ans.psb(v[i]);}
       else {
        if(v[i]<=v[0]){s+="1";ans.psb(v[i]);rot=false;}
        else s+="0";
        
        }
    }
    else{
        if(v[i]>=ans.back() && v[i]<=v[0]){s+="1";ans.psb(v[i]);}
        else s+="0";
        rot=false;
    }
}else{
       if(v[i]>=ans.back() && v[i]<=v[0]){s+="1";ans.psb(v[i]);}
        else s+="0";
   }
    
}

cout<<s<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}