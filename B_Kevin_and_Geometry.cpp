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
lli x;cin>>x;vec(v,x);fr(i,x){cin>>v[i];}
srt(v);lli index =0;lli paral=0;
frs(i,1,x){
 if(v[i]==v[i-1]){
    index =i;
    paral=v[i];
    break;
 }
}
if(index){
    v.erase(v.begin()+index);
    v.erase(v.begin()+index-1);
}
// for(auto & i : v){
//     cout<<i<<"*";
// }
if(index){
   frs(i,1,v.size()){
     if(v[i]==v[i-1]){
        cout<<paral<<" "<<paral<<" "<<v[i]<<" "<<v[i]<<'\n';
        
        return;
     }
   }
   frs(i,1,v.size()){
    if((v[i]-v[i-1])/2 < paral){
       cout<<paral<<" "<<paral<<" "<<v[i-1]<<" "<<v[i]<<'\n';return;
    }
   }
   cout<<"-1 \n";
}else{
    cout<<"-1\n";
}
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}