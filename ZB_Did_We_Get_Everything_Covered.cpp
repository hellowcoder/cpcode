#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli n,k,x;cin>>n>>k>>x;
string s;cin>>s;
//vector<lli>v(26);
string search="abcdefghijklmnopqrstuvwxyz";


//cout<<maxi<<mini<<'\n';

  //cout<<"hlow\n";return;
  set<char>sete;     //n k x  inputsss
  string check="";
  fr(i,x){
    sete.insert(s[i]);
    if(sete.size()==k){   //atleast n group toh banega hi
      check+=s[i];     //here storing last element
      sete.clear();
    }
  }
  if(check.size()>=n){yes;return;}   //mtlb n group ka ban gaya hoga mtlb har ek element n bar aa hi gay hoga...
 // map<char,lli>m2;
  // vec(v,k);
  // cout<<check<<'\n';
  char missing='a';
  fr(i,k){
    char c=search[i];
    if(sete.find(c)==sete.end()){
     missing=c;
     break;
    }
  }
  while(check.size()<n)check+=missing;
  no;cout<<check<<'\n';return;
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}