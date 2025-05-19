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
#define take(lli,x) lli x;cin>>x
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

lli lis(vector<lli>&v){   //brute dp
     int n=v.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[j]<v[i]){
                     dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        int ans=0;
        for(auto &i:dp){
            //cout<<i<<'\n';
            ans=max(ans,i);
        }
        return ans;
}

lli lisb(vector<lli>&v){     //dp with binary seach
     int n=v.size();int ans=1;
        vector<int>temp;
        temp.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]>temp.back()){
                temp.push_back(v[i]);
                ans++;
            }
            else{
                int ind = lower_bound(temp.begin(),temp.end(),v[i])-temp.begin();
                temp[ind]=v[i];
            }
        }
        return ans; //return temp.size();
}

lli liscount(vector<lli>&v){                 //usage brute o(n^2) to find count of lis 
    lli n=v.size(),len=1,ans=0;           //o(nlog(n)) can be aceived using bit (fenwick tree)
    vector<lli>dp(n,1),count(n,1);
    frs(i,1,n){
        for(lli j=0;j<i;j++){
            if(v[j]<v[i]){
                if(dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    count[i]=count[j];
                }
                else if(dp[j]+1 == dp[i]){
                    count[i]+=count[j];
                }
            }
        }
        len=max(len,dp[i]);    //no need to do alag se
    }
    fr(i,n){
        if(dp[i]==len)ans+=count[i];
    }
    return ans;
}

lli lis_last_min_value(vector<lli>&v,lli n){  
 
    vector<lli>temp;
    fr(i,n){
      auto it=upper_bound(all(temp),v[i]);
      if(it==temp.end()){
        temp.psb(v[i]);
      }
      else{
        *it=v[i];
      }
    }
    return temp.empty()? -1 : temp.back();
}

void solve(){
lli x;cin>>x;get(v,x);
cout<<lis(v)<<'\n';
cout<<lisb(v)<<'\n';
cout<<liscount(v)<<'\n';
}

int main(){
fastio;
solve();
}
