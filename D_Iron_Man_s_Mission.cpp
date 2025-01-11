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
lli x;cin>>x;

vector<lli>odd,even;fr(i,x){
    lli k;cin>>k;lli c=i+1;
    if(c%2)odd.psb(k);
    else even.psb(k);
}

lli om=mne(odd);lli em=mne(even);
lli ans=0;lli o=odd.size(),e=even.size();//o--;e--;ans+=(x-o)*odd[0];ans+=(x-e)*even[0];o++;e++;
fr(i,o){
    if(odd[i]==om){
        ans+=om*(x-i);
        break;
    }else
    ans+=odd[i];
}
fr(i,e){
    if(even[i]==em){
        ans+=em*(x-i);
        break;
    }else
   ans+=even[i];
}
cout<<ans<<'\n';
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}