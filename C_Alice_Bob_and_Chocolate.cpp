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

void solve(){
    lli x;cin>>x;vec(v,x);fr(i,x){cin>>v[i];}
    if(x==1) {cout<<"1"<<" "<<"0";return;}
    else if(x==2) {cout<<"1"<<" "<<"1";return;}
    else{
        lli i=0,j=x-1;
        while(i<j){
            
            if(v[i]<v[j]){
                v[j]-=v[i];
                i++;
                if(i==j){
                    i--;break;
                }
                }
            else if(v[i]>v[j]){
                v[i]-=v[j];
                j--;
                if(i==j){
                    j++;break;
                }
            }
            else{
                
                i++;j--;
                if(i>j){
                    i--;j++;break;
                }
                else if(i==j){
                     j++;break;
                }
            }    
        }
        cout<<i+1<<" "<<x-i-1;
    }
}

int main(){
fastio;
solve();

}