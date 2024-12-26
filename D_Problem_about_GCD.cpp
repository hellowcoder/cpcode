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

using namespace std;
const int MOD=1e9+7;

void solve(){
lli l,r,g;cin>>l>>r>>g;lli lii=(l+g-1)/g,rii=r/g,ans=-1,left,right;
//cout<<lii<<" "<<rii<<'\n';
// if(lii>rii)  {
//     cout<<"-1"<<" "<<"-1"<<'\n';
//     return;
//     }
// if(lii==rii){
//    if(lii==1)cout<<g<<" "<<g<<'\n';
//    else cout<<"-1"<<" "<<"-1"<<'\n';
//    return;
// }

    for(lli i=lii;i<=rii && i<=lii+30;i++){
        for(lli j=max(i,rii-30);j<=rii;j++){
            if(gcd(i,j)==1){
                 if(j-i>ans) {
                     ans=j-i;
                     left=i;
                     right=j;
                 }        
            }
    }
}
if(ans==-1)    
cout<<"-1"<<" "<<"-1"<<'\n';
else
cout<<left*g<<" "<<right*g<<'\n';

}
int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}