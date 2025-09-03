//Author: sandeep172918
//Date: 2025-08-31 14:31

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 

void ingame(lli rr,lli ss,lli rrr,lli sss,char c){
    if(c=='S'){
         cout<<rrr<<" ("<<rr<<") - "<<sss<<" ("<<ss<<"*)\n";
    }else{
         cout<<rrr<<" ("<<rr<<"*) - "<<sss<<" ("<<ss<<")\n";
        
    }
}

void solve(){
lli ss=0,rr=0;
lli sss=0,rrr=0;
string s;cin>>s;
lli n=s.size();
bool bol=false;
bool win=false;
fr(i,n){
   if(s[i]=='Q'){
     
        if(win){
          if(sss>rrr){
            cout<<sss<<" (winner) - "<<rrr<<"\n";
          }else{
            cout<<sss<<" - "<<rrr<<" (winner)\n";
          }
        }else{
           ingame(ss,rr,sss,rrr,s[i-1]);
           
        }
         continue;
    }
    if(win)continue;
    
    if(bol){
        if(s[i]=='S'){
            rr++;
            
        }
        if(s[i]=='R'){
          ss++;
          //bol=!bol;
        }
    }
    else{
      if(s[i]=='S')ss++;
      if(s[i]=='R'){
        rr++;
       // bol=!bol;
      }
    }  

    if(ss==10)ss=0,rr=0,sss++;
     else if(rr==10)rr=0,ss=0,rrr++;
        else{
            if((ss-rr)>=2  && ss>=5){
                sss++;
                ss=0;rr=0;
            }else if(rr>=5 && (rr-ss)>=2){
                rrr++;
                rr=0;ss=0;
            }
        }

     if(rrr>=2 || sss>=2)win=true;   
     if(s[i]=='R') bol=!bol;  
   
}
}

int32_t main(){
fastio;
lli tt=1;
//cin>>tt;
while(tt--){
solve();
}
}