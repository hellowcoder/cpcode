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



void solve() {
    lli x, y;
    cin >>x>>y;
    
    vector<vector<lli>> a(x, vector<lli>(y));
    vector<vector<lli>> b(x, vector<lli>(y));
    vector<lli> rowXor(x, 0), colXor(y, 0);

    
    fr(i, x) {
        fr(j, y) {
            cin >> a[i][j];
            rowXor[i] ^= a[i][j];  
            colXor[j] ^= a[i][j];  
        }
    }

    fr(i, x) fr(j, y) cin >> b[i][j];

   
    fr(i, x) {
        fr(j, y) {
            if (a[i][j] != b[i][j]) {
                // If b[i][j] == 0, rowXor[i] and colXor[j] must be 0
                if (b[i][j] == 0 && (rowXor[i] || colXor[j])) {
                    cout << "No\n";
                    return;
                }
                // If b[i][j] == 1, rowXor[i] or colXor[j] must be 1
                if (b[i][j] == 1 && (!rowXor[i] && !colXor[j])) {
                    cout << "No\n";
                    return;
                }
            }
        }
    }

    cout << "Yes\n";
}





int32_t main(){
fastio;
solve();
}
