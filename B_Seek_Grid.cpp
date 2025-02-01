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

vector<vector<char>> getM(vector<vector<char>>& matrix, lli pivotRow, lli pivotCol,lli m) {
    vector<vector<char>> submatrix;

    for (int i = pivotRow; i < pivotRow+m && matrix.size(); i++) {
        vector<char> row;
        for (int j = pivotCol;j < pivotCol+m && matrix[0].size(); j++) {
            row.push_back(matrix[i][j]);
        }
        submatrix.push_back(row);
    }
    
    return submatrix;
}

void solve(){
lli n,m;cin>>n>>m;vector<vector<char>>a(n,vector<char>(n));vector<vector<char>>b(m,vector<char>(m));
fr(i,n){
    fr(j,n){
        cin>>a[i][j];

    }
}
fr(i,m){
    fr(j,m){
        cin>>b[i][j];

    }
}
fr(i,n){
    fr(j,n){
        if(a[i][j]==b[0][0]){
        vector<vector<char>>ans=getM(a,i,j,m);
        // fr(h,ans.size()){
        //     fr(k,ans.size()){
        //         cout<<ans[h][k]<<" ";
        //     }cout<<'\n';
        // }
        if(ans==b){
            cout<<i+1<<" "<<j+1<<'\n';
            return;
        }
        }

    }
}
}

int main(){
fastio;
solve();
}