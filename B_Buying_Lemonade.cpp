#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> cans(n);
    int totalCans = 0;
    for (int i = 0; i < n; i++) {
        cin >> cans[i];
        totalCans += cans[i];
    }

    int presses=0;
    int collected = 0; 
    presses += n;
    for (int i = 0; i < n; i++) {
        if (cans[i] > 0) {
            collected++;
            cans[i]--;
        }
    }  
    if (collected >= k) {
        cout << presses << endl;
        return 0;
    }
    while (collected < k) {
        for (int i = 0; i < n; i++) {
            if (cans[i] > 0) {
                presses++;
                collected++;
                cans[i]--;
                if (collected >= k) {
                    break;
                }
            }
        }
    }

    cout << presses << endl;
    return 0;
}
