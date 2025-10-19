// gen.cpp
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    // seed from argv[1] when invoked by stress script
    unsigned seed = (argc > 1) ? (unsigned)stoi(argv[1])
                               : (unsigned)chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937_64 rng(seed);

    // optional params: maxN and maxValue
    int maxN = (argc > 2) ? stoi(argv[2]) : 19;            // default max n (must be >=1)
    long long maxValue = (argc > 3) ? atoll(argv[3]) : 100; // default max value (>=1)

    if (maxN < 1) maxN = 1;
    if (maxValue < 1) maxValue = 1;

    // collect odd candidates in [1, maxN] (keeps previous behavior)
    vector<int> oddCandidates;
    for (int i = 1; i <= maxN; ++i) if (i % 2 == 1) oddCandidates.push_back(i);
    if (oddCandidates.empty()) oddCandidates.push_back(1);

    uniform_int_distribution<int> pickOdd(0, (int)oddCandidates.size() - 1);
    int n = oddCandidates[pickOdd(rng)];

    // value distribution: [1, maxValue]
    uniform_int_distribution<long long> valDist(1, maxValue);

    // generate arrays a and b of length n
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        a[i] = valDist(rng);
        b[i] = valDist(rng);
    }

    // generate m in [1, maxN] (so it's comparable to n)
    uniform_int_distribution<int> pickM(1, maxN);
    int m = pickM(rng);

    // generate d of length m
    vector<long long> d(m);
    for (int i = 0; i < m; ++i) d[i] = valDist(rng);

    // print test case in required format
    cout << n << '\n';
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << b[i];
    }
    cout << '\n';
    cout << m << '\n';
    for (int i = 0; i < m; ++i) {
        if (i) cout << ' ';
        cout << d[i];
    }
    cout << '\n';
    return 0;
}
