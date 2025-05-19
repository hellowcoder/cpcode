//Author: sandeep172918
//Date: 2025-05-11 21:12

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,0));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v,n) frs(i,0,n-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

//binary search lagale bete
void print(lli row,lli col,lli& fill,lli n,vector<vector<lli>>&v,vector<vector<bool>>&booli){
    
    while(col <n && booli[row][col]){
        v[row][col]=fill++;booli[row][col]=false;
        col++;
    }
    row++;col--;
    while(row<n && booli[row][col]){
        v[row][col]=fill++;booli[row][col]=false;
        row++;
    }
    row--;col--;
    while(col>=0 && booli[row][col]){
        v[row][col]=fill++;booli[row][col]=false;
        col--;
    }
    col++;row--;
    while(row>=0 && booli[row][col]){
        v[row][col]=fill++;booli[row][col]=false;
        row--;
    }
    //row++;col++;
    //cout<<"*"<<row<<"*"<<col<<'\n';
   
    
}  
void solve(){
lli x;cin>>x;
vec2(v,x,x);
vector<vector<bool>>booli(x,vector<bool>(x,true));
lli fill=0;
fr(i,x){
    print(i,i,fill,x,v,booli);
}
lli check=x*x-1;
fr(i,x){
    fr(j,x){
        cout<<check-v[i][j]<<" ";
    }cout<<'\n';
}
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}