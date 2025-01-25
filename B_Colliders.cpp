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

lli gc(vector<lli>& v,lli x){
   
    if(v.size()==0){
        v.psb(x);
        return 0;
    }
    lli result=__gcd(x,v[0]);
    if(result!=0)return v[0];
    frs(i,1,v.size()){
        result=__gcd(result,v[i]);
        if(result!=1){
            return v[i];
        }
    }
    v.psb(x);
   return 0;
}

void solve(){
lli n,m;cin>>n>>m;vector<pair<char,lli>>v(m);
fr(i,m){
    cin>>v[i].ff>>v[i].ss;
}
vector<lli>ans;
if(v[0].ff=='-') cout<<"Already off \n";
else {cout<<"Success \n";ans.psb(v[0].ss);}
frs(i,1,m){
    if(v[i].ff=='+'){
        lli k= gc(ans,v[i].ss);
       if(k){
        cout<<"Conflict with "<<k<<'\n';
       }else cout<<"Success \n";
    }
}
}

int main(){
fastio;
solve();
}