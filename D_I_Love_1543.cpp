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
#define sz(v) (lli)(v.size())++
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
lli n,m;


string print(lli row,lli col,vector<vector<char>>&v,vector<vector<bool>>&booli){
    string ans="";
    while(col <m && booli[row][col]){
        ans+=v[row][col];booli[row][col]=false;
        col++;
    }
    row++;col--;
    while(row<n && booli[row][col]){
        ans+=v[row][col];booli[row][col]=false;
        row++;
    }
    row--;col--;
    while(col>=0 && booli[row][col]){
        ans+=v[row][col];booli[row][col]=false;
        col--;
    }
    col++;row--;
    while(row>=0 && booli[row][col]){
        ans+=v[row][col];booli[row][col]=false;
        row--;
    }
    row++;col++;
    //cout<<"*"<<row<<"*"<<col<<'\n';
   
    return ans;
   
}

void solve(){
cin>>n>>m;
vector<vector<char>>v(n,vector<char>(m));
vector<string>s;
vector<vector<bool>>booli(n,vector<bool>(m));
fr(i,n){
    fr(j,m){
        cin>>v[i][j];
        booli[i][j]=true;
    }
}lli row=0,col=0;
while(row<n && col<m){
    string k = print(row,col,v,booli);
    if(k!="")
    s.psb(k);
    row++;
    col++;
}
//cout<<print(row,col,v,booli);
lli total=0;
fr(i,s.size()){
   string k=s[i];
   //cout<<k<<'\n';
   k+=k;
   lli count=0;
   fr(i,k.size()-4){
     if(k.substr(i,4)=="1543"){
        count++;
     }
   }
   total+=(count+1)/2;

}
cout<<total<<'\n';


}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}

