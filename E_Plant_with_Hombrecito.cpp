#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long n, m;
        cin >> n >> m; // Number of plants and initially infected plants
        vector<int> infected(m);

        for (int i = 0; i < m; ++i) {
            cin >> infected[i]; // Indices of infected plants
        }

        // Sort the infected plant indices
        sort(infected.begin(), infected.end());

        // Calculate gaps
        vector<int> gaps;
        for (int i = 0; i < m; ++i) {
            int gap;
            if (i == 0) {
                // Gap from the last infected plant to the first infected plant in circular manner
                gap = (infected[0] - 1) + (n - infected[m - 1]);
            } else {
                // Gap between consecutive infected plants
                gap = infected[i] - infected[i - 1] - 1;
            }
            if (gap > 0) {
                gaps.push_back(gap);
            }
        }

        // Sort gaps in descending order
        sort(gaps.rbegin(), gaps.rend());

        // Calculate minimum number of infected plants
        long long min_infected = m; // Start with initially infected plants
        int protectable = min((int)gaps.size(), (int)m); // Number of plants Hombrecito can protect

        for (int i = 0; i < protectable; ++i) {
            // Protecting in the largest gaps reduces the infection spread
            min_infected += gaps[i] - 1;
        }

        cout << min_infected << endl; // Output result for this test case
    }

    return 0;
}
