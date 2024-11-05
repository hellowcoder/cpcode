#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // number of test cases.
    cin >> n;

    while (n--) {
        int y;
        cin >> y;
        vector<int> vec(y);
        
        for (int i = 0; i < y; i++) {
            cin >> vec[i];
        }
        
        sort(vec.begin(), vec.end());
        
        int sum = vec[0];
        for (int i = 1; i < y; i++) {
            sum = (sum + vec[i]) / 2; 
        }
        
        cout << sum << endl;
    }

    return 0;
}
