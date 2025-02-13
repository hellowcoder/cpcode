#include <bits/stdc++.h>
#define lli long long int
#define fr(i, n) for (lli i = 0; i < (n); i++)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    lli x, y;
    cin >> x >> y;
    vector<lli> a(x), b(y);
    
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    lli check = *min_element(b.begin(), b.end());
    auto it = find(b.begin(), b.end(), check);
    
    vector<lli> rp(y);
    rotate_copy(b.begin(), it, b.end(), rp.begin());

    for (lli i = 0; i <= x - y; i++) {
        if (a[i] >= check) {
            if (lexicographical_compare(a.begin() + i, a.begin() + i + y, rp.begin(), rp.end())) {
                copy(rp.begin(), rp.end(), a.begin() + i);
                break;
            }
        }
    }

    for (lli i : a) cout << i << " ";
    cout << '\n';
}

int32_t main() {
    fastio;
    lli tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}
