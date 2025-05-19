#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int lsb(int x) {
    return x & -x;
}

class RMQFenwickTree {
    vector<int> A, BIT1, BIT2;
    int N;

public:
    RMQFenwickTree(const vector<int>& arr) {
        N = arr.size();
        A = vector<int>(N + 1);
        BIT1 = vector<int>(N + 1, INT_MAX);
        BIT2 = vector<int>(N + 1, INT_MAX);
        for (int i = 1; i <= N; ++i) {
            A[i] = arr[i - 1];
        }
        build();
    }

    void build() {
        for (int i = 1; i <= N; ++i) {
            int l = i - lsb(i) + 1;
            BIT1[i] = A[i];
            for (int j = i - 1; j >= l; --j)
                BIT1[i] = min(BIT1[i], A[j]);

            int r = i + lsb(i) - 1;
            if (r > N) r = N;
            BIT2[i] = A[i];
            for (int j = i + 1; j <= r; ++j)
                BIT2[i] = min(BIT2[i], A[j]);
        }
    }

    int query(int i, int j) {
        int res = A[i];
        int x = i;
        while (x + lsb(x) - 1 <= j) {
            res = min(res, BIT1[x]);
            x += lsb(x);
        }

        x = j;
        while (x - lsb(x) + 1 >= i) {
            res = min(res, BIT2[x]);
            x -= lsb(x);
        }

        return res;
    }

    void update(int index, int value) {
        A[index] = value;

        // Update BIT1 from index upward
        for (int i = index; i <= N; i += lsb(i)) {
            int l = i - lsb(i) + 1;
            BIT1[i] = A[l];
            for (int j = l + 1; j <= i; ++j)
                BIT1[i] = min(BIT1[i], A[j]);
        }

        // Update BIT2 from index downward
        for (int i = index; i > 0; i -= lsb(i)) {
            int r = i + lsb(i) - 1;
            if (r > N) r = N;
            BIT2[i] = A[i];
            for (int j = i + 1; j <= r; ++j)
                BIT2[i] = min(BIT2[i], A[j]);
        }
    }
};
int main() {
    vector<int> arr = {1, 0, 2, 1, 1, 3, 0, 4, 2, 5, 2, 2, 3, 1, 0};
    RMQFenwickTree tree(arr);

    cout << "RMQ(5, 13): " << tree.query(5, 13) << "\n"; // Expected: 0
    tree.update(7, 10); // Changing A[7] from 0 to 10
    cout << "RMQ(5, 13): " << tree.query(5, 13) << "\n"; // Expected: 1
}
