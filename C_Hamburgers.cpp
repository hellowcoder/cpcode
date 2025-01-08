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

void solve(){   //BSC b=0 s=1 c=2 indexing
string s;cin>>s;vec(av,3);vec(pr,3);vector<lli>req(3,0);fr(i,3){cin>>av[i];}fr(i,3)cin>>pr[i];lli k;cin>>k;
for(auto i:s){if(i=='B')req[0]++;else if(i=='S')req[1]++;else req[2]++;}lli ans=0;
//cout<<req[0];
lli low=0,high=1e14;
while(low<=high){
    lli c=k;
    lli mid=(high+low)/2;
    fr(i,3){
        
        lli a=av[i];
        a-=(req[i]*mid);
        if(a<0){
            c-=(pr[i]*(req[i]*mid-av[i]));
        }
    }
    if(c<0)high=mid-1;
    else{
        ans=mid;
        low=mid+1;
    }
}

cout<<ans;
}

int main(){
fastio;
solve();
}
