//Author: sandeep172918
//Date: 2025-10-05 22:46

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
#define bitc(x) __builtin_popcountll(x)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define y1 cout<<"1\n"
#define y2 cout<<"2\n"
#define no cout<<"0\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve(){
lli n,k;cin>>n;
get(v,n);

lli check=v[0];
if(count(all(v),check)==n){
    if(n&1){
        if(check==(n+1)/2)y2;
        else no;
    }else{
        if(check==(n/2) || check==(n/2+1))y1;
        else no;
    }
    return;
}


vector<char>temp(n,'*');
frs(i,1,n-1){
    if(abs(v[i]-v[i-1])>1){
        no;
        return;
    }
    if(v[i-1]>v[i]){ //LL
      if(temp[i-1]=='R'){
        no;return;
      }
      temp[i-1]='L';
      temp[i]='L';
    }else if(v[i-1]<v[i]){ //RR
      if(temp[i-1]=='L'){
        no;return;
      }
      temp[i-1]='R';
      temp[i]='R';
    }else{ //LR,RL
      // temp[i]='R'+'L'-temp[i-1];
    }
}
lli i=0;
while(temp[i]=='*')i++;

rfr(j,i-1,0){
  temp[j]='R'+'L'-temp[j+1];
}
i=n-1;
while(temp[i]=='*')i--;
frs(j,i+1,n-1){
  temp[j]='R'+'L'-temp[j-1];
}

fr(i,n){
    if(temp[i]=='*'){
        if(temp[i-1]!=temp[i+1]){
            no;return;
        }else{
            temp[i]='R'+'L'-temp[i-1];
        }
    }
}

vll pref(n,0); //R
vll suff(n,0);  //L

pref[0]=0;
suff[n-1]=0;

frs(i,1,n-1){
 pref[i]=pref[i-1]+(temp[i-1]=='R');
}

rfr(i,n-2,0){
    suff[i]=suff[i+1]+(temp[i+1]=='L');
}
fr(i,n){
    if(v[i]!=(pref[i]+suff[i]+1)){
        no;return;
    }
}
y1;

}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}