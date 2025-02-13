#include <bits/stdc++.h>
#define lli long long int
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;

// Matrix multiplication 
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

// exponentiation of a matrix
void matrixPower(vector<vector<lli>>& mat, lli exp) {
    vector<vector<lli>> res = {{1, 0}, {0, 1}}; 

    while (exp > 0) {
        if (exp % 2 == 1) {
            multiply(res, mat);
        }
        multiply(mat, mat);
        exp /= 2;
    }

    
    mat = res;
}

void solve() {
    lli x;
    cin >> x;
    
    
    vector<vector<lli>> mat = {{3, 1}, {1, 3}};
    matrixPower(mat, x);
    cout << mat[0][0] << endl;
}

int main() {
    fastio;
    solve();
    return 0;
}
