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
#define take(lli,x) lli x;cin>>x
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

//Matrix multiplication with modulo
void multiply(vector<vector<lli>>& mat1, vector<vector<lli>>& mat2) {
    lli x = (mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0]) % MOD;
    lli y = (mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1]) % MOD;
    lli z = (mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0]) % MOD;
    lli w = (mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1]) % MOD;

    mat1[0][0] = x;
    mat1[0][1] = y;
    mat1[1][0] = z;
    mat1[1][1] = w;
}

// Matrix exponentiation with modulo
void matrixPower(vector<vector<lli>>& mat1, lli n) {
    if (n == 0 || n == 1) return;

    vector<vector<lli>> mat2 = {{3, 1}, {1, 3}};
    matrixPower(mat1, n / 2);
    multiply(mat1, mat1);

    if (n % 2 != 0) {
        multiply(mat1, mat2);
    }
}


void solve(){
lli x;cin>>x;
vector<vector<lli>> mat1 = {{3, 1}, {1, 3}};
    matrixPower(mat1, x-1);
    cout<<mat1[0][0];
}

int main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}