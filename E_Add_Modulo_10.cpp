//Author: sandeep172918
//Date: 2025-03-20 18:56
/*
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⢤⣶⡐⠭⡛⢿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢩⡞⢯⢻⡿⢿⣷⡦⡑⢌⢻⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢟⣜⣿⣽⣿⣷⣿⣿⣷⠷⣈⡶⣼⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢏⣴⢯⢿⣿⣿⣿⣿⣿⠯⣃⡾⢡⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⣜⡾⣯⣷⣹⠿⢷⣿⣍⡼⡟⣱⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⢺⣽⣻⣽⣷⣯⡟⣬⡝⣎⠗⣼⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⣛⠛⡛⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⣨⣿⣿⣿⣿⣽⣷⣿⣷⣻⠃⣾⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠁⢠⠓⣤⠒⡔⢲⠉⡌⠙⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢡⣽⣿⣿⣿⣿⡝⣿⣿⣿⣿⠁⣼⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⢬⣛⣾⣱⣎⢷⢣⡚⡄⠆⡄⣈⢉⠉⢉⡉⠉⠙⠛⢿⠋⣠⣿⣿⣿⣿⣿⣿⣿⣯⣟⡖⣰⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⠃⢘⣦⡝⣾⢷⣿⣿⣷⣿⣾⣴⣻⡵⣮⣻⣧⢿⡱⢢⠀⢠⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡿⠁⢀⡛⢾⡽⣞⣿⣿⣿⣿⣿⣿⢷⣾⡾⣵⣋⣬⣾⢣⠁⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⡿⠋⠀⡠⢂⠽⣩⢻⡽⡿⠋⣃⢡⢀⠤⢢⣤⣤⣁⠙⠛⠁⠂⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣽⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡟⠁⠰⣌⡱⠩⣆⠱⢣⠘⢀⣞⡱⣎⣮⣗⣷⣾⣿⣿⣷⣶⠄⢰⣯⢿⣿⣿⣿⣿⣿⣿⣿⣿⡯⠅⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡇⢨⢑⠦⣙⢇⢦⠃⢀⡴⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢠⣟⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡇⠸⢌⢊⠵⣪⠖⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢁⣾⣾⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⠍⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡇⠀⠠⠞⡙⠂⢠⣯⣾⣿⡿⣟⣿⣿⣿⣿⣿⣿⣿⣿⡟⢸⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⡇⣼⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⡇⢀⣰⢶⠛⠀⣞⡷⣛⡾⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⠡⡞⣿⡿⣿⣿⣿⣿⣿⣿⣿⠋⡴⠀⣁⣽⣭⣧⣌⠉⠻⣿⣿⣿⣿⣿⣿⣿
⣿⣿⡟⠡⠊⣉⠀⠀⡾⢡⣛⣭⣟⣾⣽⣿⣿⣿⣿⣿⣿⣿⡏⢰⡹⣽⣻⣿⣿⣿⣿⣿⣿⣖⡻⠀⣴⣾⣿⣿⣾⣾⣞⢧⠀⣿⣿⣿⣿⣿⣿
⣿⠏⠀⢠⡞⠁⡀⠳⣌⢧⣛⣶⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⢁⢮⣳⢯⣷⣻⣿⣽⡾⣯⡳⡽⠀⡼⣶⣿⣿⣟⡷⣟⢮⡹⡂⣿⣿⣿⣿⣿⣿
⡿⠀⢠⡞⠀⢠⡑⡳⡜⣯⣻⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⡰⣎⣷⣻⣞⣿⣳⢯⡿⣴⡛⠔⣸⣽⣿⣿⣿⣾⢿⣛⣎⠷⢠⣿⣿⣿⣿⣿⣿
⡇⠀⠸⠌⢐⢢⡑⢧⡻⣼⣳⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⣰⢳⣝⣾⣳⣟⡾⣽⣫⢷⣣⠍⣰⣿⣿⣿⣿⣟⣾⡿⡿⣽⠊⢈⣛⡛⢛⠿⣿⣿
⡇⠀⠠⢉⢆⠲⣙⢮⢷⣻⣿⣿⣿⣿⣿⣿⣿⣿⣛⠆⣜⢧⣟⣾⣳⣿⢾⡽⣳⢟⡶⠃⣸⣿⣿⣿⣿⣿⣽⡷⣿⢟⣧⠋⣰⣷⣿⣷⣅⡊⢹
⡇⠀⠀⡉⢆⡹⣌⣻⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣟⣾⣻⢾⣳⣿⣯⣻⣵⣛⢾⡘⢁⣾⣿⣿⣿⣿⣿⣿⣻⣯⣟⡆⢰⣿⣿⢿⣻⢮⡟⢸
⣇⠀⠀⠰⢌⡲⢥⡿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⡿⣽⠾⣽⣿⣿⣿⣳⢯⡶⣯⢳⡅⢸⣿⣿⣿⣿⣿⣿⣿⣿⣵⡏⢠⣿⣿⣿⣿⡽⣯⡐⢣
⣿⡄⠀⠐⠨⢕⡯⣽⣻⢿⣿⣿⡿⣿⣻⢿⣟⣯⣟⢷⣻⣳⢯⣿⣯⣟⣷⣻⡽⣣⠆⣻⣿⣯⣿⣿⠿⣾⡽⣯⡟⢀⣿⣿⣿⣿⢿⣳⢷⣊⢸
⣿⡇⠀⠀⠀⠈⢟⡳⢯⡿⣾⣻⣽⣳⢿⣿⣿⣻⣞⡯⣗⣯⣿⢯⣷⣻⣞⡷⣹⢆⡣⢿⣽⣿⣿⢯⣟⣷⡼⣿⠁⣿⣿⣿⣿⣿⣟⡿⣬⢇⢸
⣿⣷⠀⠀⠀⠀⠀⠉⠳⠙⢧⢓⠮⡝⣯⢿⣽⣳⢟⣾⣽⣾⣻⣻⣾⣳⢯⡽⣓⢮⡹⣿⣟⡿⣽⣞⡿⣽⣳⠇⣘⣿⣿⣿⣟⡿⣾⡝⣧⠃⣾
⣿⣿⡀⠀⠀⠀⠀⠀⠀⢃⠘⡘⠜⣣⠻⣜⢧⣛⢟⣿⣿⣧⢿⣿⣻⠿⡼⢧⡛⣤⣻⣧⣟⡻⣼⣛⣿⣻⢿⠀⣿⣿⣿⣟⣿⣿⢧⣻⠄⡄⣿
⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠐⠀⠌⡀⠛⢬⢣⢯⣿⣿⢻⡼⣻⣟⢿⡻⣝⡣⡝⢶⢯⡷⣯⢷⢧⣛⡶⢯⡞⣰⢯⣟⣾⣽⢿⣞⡯⡗⡋⣰⣿
⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠈⠐⠠⠀⠂⠌⠲⡉⠎⠳⣽⣳⡾⣏⠷⣍⠲⣝⢯⣾⣿⣿⣯⣿⡿⣽⡻⣜⢧⣟⡾⣽⢯⣟⡾⡝⡱⢀⣿⣿
⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠁⠀⠉⠑⠉⠃⡌⠱⢎⡳⣝⢾⣻⠾⣿⣽⡳⣽⡹⣾⣽⣻⢽⣚⡮⢷⡍⢁⣼⣿⣿
⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠁⠊⠐⠉⠢⢍⡳⢧⡞⣽⡲⣟⣳⢯⣟⣧⢻⡜⡃⢀⣾⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣶⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠂⠉⠒⡙⠶⣙⢧⡻⣝⠮⡜⢣⠎⣡⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠐⠈⠄⡐⠠⠀⠀⠈⠠⠁⠊⠑⠊⠅⠙⣀⣼⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣀⣀⣀⣀⣀⣀⣀⣀⣤⣴⣦⣤⣤⣤⣄⣀⣀⣀⠀⠀⠀⠀⢀⣠⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿

*/
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
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
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
#define yes cout<<"Yes\n"
#define no cout<<"No\n";
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli x;cin>>x;get(v,x);

fr(i,x){
    
    if(v[i]%10==2 || v[i]%10==0)continue;
    if(v[i]%10==5){
        v[i]+=5;
        continue;
    }
    while(v[i]%10!=2){
        v[i]+=(v[i]%10);
    }

}
//fr(i,x)cout<<v[i]<<" ";cout<<'\n';
srt(v);
frs(i,1,x){
 if(v[i]-v[i-1]==0)continue;
 if((v[i]-v[i-1])%20==0){
    if(v[i-1]%10==0){
        no;return;
    }

 }
 else{
    no;return;
 }
}
yes;
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}