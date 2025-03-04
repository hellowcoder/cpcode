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
#define take(lli,x) lli x;cin>>x
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  max_element(v.begin(),v.end())
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

void solve(){
lli x;cin>>x;get(v,x);
//lli k=mxe(v)-v.begin();
//cout<<k<<'\n';
rsrt(v);
vector<bool>bol(x,false);
bol[0]=true;
cout<<v[0]<<" ";
lli check=v[0];
fr(i,x-1){
   
       lli k=0,index=-1;
       fr(j,x){
        if(!bol[j])
        {   
            lli curr=__gcd(check,v[j]);
            if(curr>k){
                k=curr;
                index=j;
            }
        }
    }
        if(index!=-1){
        check=k;
        bol[index]=true;
        cout<<v[index]<<" ";
        
       }
    }
    cout<<'\n';
   
}
//cout<<'\n';



int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}