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
using namespace std;
const int MOD=1e9+7;



int main(){
fastio;
lli tt;cin>>tt;vec(v,tt);fr(i,tt){cin>>v[i];}
lli i=0,j=tt-1;lli a=v[0],b=v[j];lli acount=0,bcount=0;
while(i<=j){
  if(a>b){
    j--;
    b+=v[j];
    bcount++;
  }
  if(a<b){
    i++;a+=v[i];acount++;
  }
  if(a==b){
    i++;j--;a+=v[i];b+=v[j];acount++;bcount++;
  }
}
cout<<acount<<" "<<bcount;

}