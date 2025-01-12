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
lli n,m;cin>>n>>m;string s;cin>>s;
vector<vector<lli>>v(n,vector<lli>(m));lli maxsum=0;vec(rs,n);vec(cs,m);
fr(i,n){
    lli sum=0;
    fr(j,m){
        cin>>v[i][j];
        sum+=v[i][j];
    }
    maxsum=max(maxsum,sum);
    rs[i]=sum;
}
fr(i,m){
    lli sum=0;
    fr(j,n){
            
        sum+=v[j][i];
    }
    maxsum=max(maxsum,sum);
    cs[i]=sum;
}
lli row=0,col=0;
fr(i,s.size()){
    if(s[i]=='D'){
     v[row][col]=0-rs[row];
     cs[col]+=v[row][col];
     row++;
    }
    else{
        v[row][col]=0-cs[col];
        rs[row]+=v[row][col];
        col++;
    }
}
//cout<<"//////"<<row<<" "<<col<<'\n';
v[row][col]=0-rs[row];
fr(i,n){
    fr(j,m){
        cout<<v[i][j]<<" ";
    }cout<<'\n';
}


}
int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}

