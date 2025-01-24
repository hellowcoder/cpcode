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
lli n,h;cin>>n>>h;vec(a,n);fr(i,n)cin>>a[i];lli counter=0;lli in;lli ans=0;lli final=0;
if(n==1){
    if(h>=a[0]){
        cout<<"1 \n";
    }
    else
    cout<<"0\n";
    return;
}
for(lli j=1;j<n;j++){
       ans=0;
       counter=0;lli k;
       vector<lli>v = a;
   
    sort(v.begin(),v.begin()+j+1);
     //      for(lli i=0;i<=j;i++){
    //     cout<<v[i]<<" ";
    //    }cout<<'\n'; 
       for(k=j;k>0;k-=2){
        lli wat=max(v[k],v[k-1]);
         //cout<<wat<<"*";
        if(wat+counter <=h){
            counter+=wat;
            ans+=2;
        }
       }
        if(k==0){
            
           if(v[k]+counter <=h){
            counter+=v[k];
            ans++;
        }
        
       }
       //cout<<ans<<counter<<j<<'\n';
       if(ans>=j+1){
          final=max(final,j+1);
       }
    //cout<<"#";
       }

cout<<final;

    }






int main(){
fastio;
solve();
}