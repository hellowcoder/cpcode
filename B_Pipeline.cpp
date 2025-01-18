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
lli x,y;cin>>x>>y;lli req=y*(y+1)/2-(y-1);
if(y>=x){cout<<"1\n";return;}
if(x>req) {cout<<"-1\n";return;}
lli current_pipes = 1; 
lli remaining = x - 1;
lli splitters_used = 0;

    
    for (long long i = y; i >= 2 && remaining > 0; --i) {
        lli splitter_output = i - 1;
        lli usable = min(remaining / splitter_output, 1LL); // Use this splitter once if it helps
        current_pipes += usable * splitter_output;
        remaining -= usable * splitter_output;
        splitters_used += usable;
    }

    cout << splitters_used << endl;



}

int main(){
fastio;
solve();
}