// Author: sandeep172918
// File: gen.cpp
#include <bits/stdc++.h>
using namespace std;
#define lli long long  int
lli rnd_ll(lli a, lli b) {
    lli range = b - a + 1;
    lli r = ( (lli)rand() * (RAND_MAX + 1LL) + rand() );
    r = (r % range + range) % range;
    return a + r;
}

int main(int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Usage: ./gen n max_val [seed]
    if (argc < 3) {
        cerr << "Usage: ./gen n max_val [seed]\n";
        return 1;
    }

    lli n = atoll(argv[1]);
    lli MAXV = atoll(argv[2]); 
    unsigned int seed = (argc >= 4) ? (unsigned int)atoi(argv[3]) : (unsigned int)time(0);
    srand(seed);

    lli a = -MAXV;
    lli b = MAXV;

    unordered_set<lli> used;
    used.reserve((size_t)min(n, MAXV*2 + 1)); // hint to avoid rehashing
    vector<lli> out;
    out.reserve(n);

    while ((lli)out.size() < n) {
        lli x = rnd_ll(a, b);
        if (used.insert(x).second) out.push_back(x);
    }

    cout << n << '\n';
    for (size_t i = 0; i < out.size(); ++i) {
        if (i) cout << ' ';
        cout << out[i];
    }
    cout << '\n';
    return 0;
}
