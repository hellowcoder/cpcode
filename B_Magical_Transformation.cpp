#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    lli x, y;
    cin >> x >> y;
    
    vector<vector<lli>> a(x, vector<lli>(y));
    vector<vector<lli>> b(x, vector<lli>(y));
    vector<lli> rowXor(x, 0), colXor(y, 0);

   
    fr(i, x) {
        fr(j, y) {
            cin >> a[i][j];
            rowXor[i] ^= a[i][j];  // XOR of row i
            colXor[j] ^= a[i][j];  // XOR of column j
        }
    }

    // Input matrix B
    fr(i, x) fr(j, y) cin >> b[i][j];

   fr(i,x){
    fr(j,y){
        if(a[i][j]==b[i][j])continue;
        else if(b[i][j]==0){
          if(rowXor[i]==1 && colXor[j]==1){
            cout<<"No\n";return;
          }
        }
        else if(b[i][j]==1){
          if(rowXor[i]==0 && colXor[j]==0){
            cout<<"No\n";return;
          }
        }
    }
   }

    cout << "Yes\n";
}

int32_t main() {
    fastio;
    solve();
}
