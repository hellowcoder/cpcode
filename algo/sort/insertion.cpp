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

void insertion(vector<lli>& v,lli n){
   frs(i,1,n){
       lli j=i;
       while(j>0){
        if(v[j]<v[j-1]) swap(v[j],v[j-1]);
        j--;
       }
   }
}
void insert_reverse(vector<lli>& v){
    frs(i,0,v.size()-1){
        lli k=i;
        while(k<v.size()-1){
            if(v[k]>v[k+1])swap(v[k],v[k+1]);
            k--;
        }
    }
}
int main(){
fastio;
lli tt;cin>>tt;vec(v,tt);fr(i,tt){cin>>v[i];}insert_reverse(v);fr(i,tt){cout<<v[i]<<" ";}

}