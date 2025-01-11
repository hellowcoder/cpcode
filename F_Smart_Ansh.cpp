#include <bits/stdc++.h>
#define lli long long int
#define MOD 1000000007
using namespace std;

// Matrix multiplication with modulo
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

    vector<vector<lli>> mat2 = {{1, 1}, {1, 0}};
    matrixPower(mat1, n / 2);
    multiply(mat1, mat1);

    if (n % 2 != 0) {
        multiply(mat1, mat2);
    }
}

// Compute nth Fibonacci number modulo MOD
lli nthfibo(lli n) {
    if (n <= 1) return n;

    vector<vector<lli>> mat1 = {{1, 1}, {1, 0}};
    matrixPower(mat1, n - 1);
    return mat1[0][0];
}

// Compute Pisano period for modulo n
lli computePisanoPeriod(lli n) {
    lli prev = 0, curr = 1, next;
    for (lli i = 0; i < n * n; ++i) {
        next = (prev + curr) % n;
        prev = curr;
        curr = next;
        if (prev == 0 && curr == 1) {
            return i + 1; // Pisano period length
        }
    }
    return 0; // Should never reach here
}

// Find Fibonacci numbers divisible by n within the Pisano period
vector<lli> findDivisibleIndices(lli n, lli pisanoPeriod) {
    vector<lli> divisibleIndices;
    lli prev = 0, curr = 1;
    for (lli i = 1; i <= pisanoPeriod; ++i) {
        if (prev % n == 0) {
            divisibleIndices.push_back(i); // 1-based index
        }
        lli next = (prev + curr) % n;
        prev = curr;
        curr = next;
    }
    return divisibleIndices;
}

void solve() {
    lli i, n;
    cin >> i >> n;

    // Step 1: Compute Pisano period for n
    lli pisanoPeriod = computePisanoPeriod(n);

    // Step 2: Find all indices divisible by n within Pisano period
    vector<lli> divisibleIndices = findDivisibleIndices(n, pisanoPeriod);

    // Step 3: If there are no Fibonacci numbers divisible by n, return -1
    if (divisibleIndices.empty()) {
        cout << -1 << "\n";
        return;
    }

    // Step 4: Calculate the index of the i-th Fibonacci number divisible by n
    lli numDivisible = divisibleIndices.size();
    lli positionInPeriod = (i - 1) % numDivisible; // 0-based position in period
    lli numPeriods = (i - 1) / numDivisible;

    // Step 5: Calculate result index
    lli resultIndex = divisibleIndices[positionInPeriod] + numPeriods * pisanoPeriod;

    // Output the result modulo 10^9 + 7
    cout << resultIndex % MOD << "\n";
}

int main() {
    
    lli tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
