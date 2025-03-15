//Author: sandeep172918
//Date: 2025-03-06 18:12
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
lli n;cin>>n;
string s;cin>>s;map<char,lli>m;
//vector<vector<lli>>v(4);//ensw
//vector<
fr(i,s.size()){
    m[s[i]]++;
}
//cout<<m['N']<<m['S']<<m['E']<<m['W']<<'\n';
lli x=0,y=0;
for(auto & i : m){
   // cout<<i.ff<<'\n';
    if(i.ss&1){
        if(i.ff=='N')y++;
        if(i.ff=='S')y--;
        if(i.ff=='W')x--;
        if(i.ff=='E')x++;
    }
}
if((n==2 && s[0]!=s[1])||n==1)std::cout<<"NO\n";
else if(x==0  && y==0){
    string k=s;
    srt(k);
    if(k.size()==4 && k=="ENSW"){
       fr(i,4){
        if(s[i]=='N')s[i]='H';
        if(s[i]=='S')s[i]='H';
        if(s[i]=='W')s[i]='R';
        if(s[i]=='E')s[i]='R';
       }
       cout<<s<<'\n';return;
    }
    char c='H';
 
   lli check=m['N'];
   lli count=0;
   fr(i,n){
    
    if(s[i]=='N'){
        count++;
        s[i]=c;
        if(c=='H')c='R';
        else c='H';
        if(check%2 && count==check){
            s[i]='R';  //odd wale R ko de de te haiiiii
          }
    }
      
    
   }
   check=m['S'];
   c='H';
   count=0;
   fr(i,n){
   // lli count=0;
    if(s[i]=='S'){
        count++;
        s[i]=c;
        if(c=='H')c='R';
        else c='H';
        if(check%2 && count==check){
            s[i]='R';  //odd wale R ko de de te haiiiii
            break;
          }
    }
    // if(check%2 && count==check){
    //     s[i]='R';                       //odd wale R ko de de te haiiiii
    // }
   }
   check=m['E'];
   c='H';
   count=0;
   fr(i,n){
   // lli count=0;
    if(s[i]=='E'){
        count++;
        s[i]=c;
        if(c=='H')c='R';
        else c='H';
        if(check%2 && count==check){
            s[i]='R';  //odd wale R ko de de te haiiiii
            break;
          }
    }
    // if(check%2 && count==check){
    //     s[i]='R';                       //odd wale R ko de de te haiiiii
    // }
   }
  check=m['W'];
  c='H';
  count=0;
   fr(i,n){
   // lli count=0;
    if(s[i]=='W'){
        count++;
        s[i]=c;
        if(c=='H')c='R';
        else c='H';
        if(check%2 && count==check){
            s[i]='R';  //odd wale R ko de de te haiiiii
            break;
          }
    }
    // if(check%2 && count==check){
    //     s[i]='R';                       //odd wale R ko de de te haiiiii
    // }
   }
   cout<<s<<'\n'; 
}
else cout<<"NO\n";
}

int32_t main(){
//fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}