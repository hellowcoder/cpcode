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
lli n,k;cin>>n>>k;//n even
//cout<<n<<k<<'\n';
map<lli,lli>m;
fr(i,n){
lli x;cin>>x;
m[x]++;
}
lli count =0;
// for(auto &i :m){
//     cout<<i.ff<<" "<<i.ss;
//     cout<<'\n';
// }
for(auto &i : m){
    lli a=k-i.ff;
   // cout<<a<<" \n";
    if(a==i.ff){
       count+=i.ss/2;
    }
    else if(m.find(a) !=m.end()){
        lli g=m[a];//cout<<g<<'\n';
      //  cout<<"*"<<g<<'\n';
       count+=min(g,i.ss);
    }
    //cout<<count<<"*\n";
}lli flag=0;
for(auto &i : m){
    if(i.ff*2 == k){
        flag=i.ss;break;
    }
}
if(flag){
count=(count-(flag/2))/2+(flag/2);
}else{
    count/=2;
}
cout<<count<<"\n";
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}