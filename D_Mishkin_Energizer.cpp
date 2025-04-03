//Author: sandeep172918
//Date: 2025-03-29 20:50
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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

char gap(char a,char b){
    lli k='L'+'T'+'I'-a-b;
     return (char)k;
}
void solve(){
lli x;cin>>x;string s;cin>>s;if(x==1){cout<<"-1\n";return;}
lli l=0,t=0,i=0;
fr(j,x){
    if(s[j]=='L')l++;
    if(s[j]=='T')t++;
    if(s[j]=='I')i++;
}

if(l==t && t==i){
    cout<<"0\n";
    return;
}
lli target=-1,req=-1;
fr(j,2*x+1){
  lli k=l+t+i+j;
  if(k%3==0){
   lli tar=k/3;
    if(tar>=l && tar>=t && tar>=i){
       target=tar;
       req=j;
       break;
    }
  }
}
if(req==-1){cout<<"-1\n";return;}
lli reql=target-l,reqi=target-i,reqt=target-t;
vector<lli>ans;

fr(j,req){
   
    bool booli=true;
    fr(k,s.size()-1){
       if(s[k]==s[k+1])continue;
       char c=gap(s[k],s[k+1]);
       if((c=='L'&&reql>0)  || (c=='I' && reqi>0) || (c=='T'&& reqt>0)){
        ans.psb(k+1);
        s.insert(s.begin()+k+1,c);
        booli=false;
       if(c=='L')reql--;
       if(c=='T')reqt--;
       if(c=='I')reqi--;
       break;
       }
       
    }
    if(booli)break;
}
lli curri=0,currt=0,currl=0;
fr(j,s.size()){
    if(s[j]=='L')currl++;
    if(s[j]=='T')currt++;
    if(s[j]=='I')curri++;
}
lli lent=ans.size();
if(curri==target && currt==target && currl==target  && lent==req){
    cout<<lent<<'\n';
    fr(j,lent)cout<<ans[j]<<'\n';
}else cout<<"-1\n";

}

int32_t main(){
fastio;
//cout<<gap('L','I');
 lli tt;cin>>tt;
 while(tt--){
 solve();
 }
}