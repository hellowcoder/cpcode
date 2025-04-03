//Author: sandeep172918
//Date: 2025-03-21 00:58
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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
lli bin(lli base, lli exp, lli mod) {  //binary expo
    lli result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

vector<lli>dp(1e7+1,0);
void solve1(){
    dp[2]=3;dp[3]=6;
    frs(i,4,1e7+1){
        dp[i]=3*(dp[i-2]+bin(2,i-2,MOD))%MOD;
    }
}

void solve(){
lli x;cin>>x;
cout<<dp[x]<<'\n';
}

int32_t main(){
fastio;
solve1();
solve();
}