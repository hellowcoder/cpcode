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

vector<lli> kmp (string s){
lli k=s.size();vector<lli>ans(k,0);
frs(i,1,k){ 
    lli j=ans[i-1]; 
    while(j>0 && s[i]!=s[j]) j=ans[j-1];
    if(s[i]==s[j])j++,ans[i]=j;
  }
  return ans;
}
vector<lli> search(string text,string pattern){
    vector<lli>ans,pre=kmp(pattern);
    lli n=text.size(),m=pattern.size();
    lli i=0,j=0;
    while(i<n){  
       if(text[i]==pattern[j])i++,j++;
       if(j==m){ans.psb(i-j);j=pre[j-1];}  
       if(text[i]!=pattern[j]) j==0?i++:j=pre[j-1];
    }
    return ans;
}

void solve(){
string text,pat;cin>>text>>pat;
vector<lli>v=search(text,pat);
//for(lli &i:v)cout<<i<<" ";
vector<lli>a=kmp(text);
for(lli &i:a)cout<<i<<" ";
}

int main(){
fastio;
solve();
}