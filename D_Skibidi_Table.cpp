//Author: sandeep172918
//Date: 2025-04-08 21:14
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
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
lli find(lli n,lli x,lli y){
    if(n==1){
        if(x==1 && y==1)return 1;
        if(x==2 && y==2)return 2;
        if(x==2 && y==1)return 3;
        return 4;
    }
    lli a =1LL<<(n-1); //coordinate div into 4 
    lli b =1LL<<(2*(n-1));  //total numbers upto upper left  gap like 2,6,10,14
    if(x<=a && y<=a) return find(n-1,x,y);
    if(x>a && y>a) return b+find(n-1,x-a,y-a);
    if(x>a && y<=a) return 2*b+find(n-1,x-a,y);
    return 3*b+find(n-1,x,y-a);
}

pr find2(lli n,lli k) {
    if(n==1){
        if(k==1)return {1,1};
        if(k==2)return {2,2};
        if(k==3)return {2,1};
        return {1,2};
    }
    lli a=1LL<<(n-1); //coordinate div into 4
    lli b=1LL<<(2*(n-1));  //total numbers upto upper left
    if(k<=b){
        pr p=find2(n-1,k);
        return {p.ff,p.ss};
    }
    if(k<=2*b){
        pr p=find2(n-1,k-b);
        return {p.ff+a,p.ss+a};
    }
    if(k<=3*b){
        pr p=find2(n-1,k-2*b);
        return {p.ff+a,p.ss};
    }
    pr p=find2(n-1,k-3*b);
    return {p.ff,p.ss+a};
}
void solve(){
lli n,q;cin>>n>>q;
while(q--){
string s;cin>>s;
if(s=="->"){
    lli a,b;cin>>a>>b;
    lli x=find(n,a,b);
    cout<<x<<'\n';
}else{
    lli a,b;cin>>a;
    pr x=find2(n,a);
    cout<<x.ff<<" "<<x.ss<<'\n';
}
}
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}