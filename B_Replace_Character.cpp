#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int length;
        string input;
        cin >> length >> input;

        // Step 1: Calculate frequency of each character
        map<char, int> frequency;
        for (char c : input) {
            frequency[c]++;
        }

        // Step 2: Find the characters with the highest and lowest frequency
        char highestFreqChar = '\0', lowestFreqChar = '\0';
        int highestFreq = 0, lowestFreq = INT_MAX;

        for (const auto& pair : frequency) {
            // Update highest frequency
            if (pair.second > highestFreq) {
                highestFreq = pair.second;
                highestFreqChar = pair.first;
            }
            // Update lowest frequency
            if (pair.second < lowestFreq) {
                lowestFreq = pair.second;
                lowestFreqChar = pair.first;
            }
        }

        // Step 3: Replace only one occurrence of the lowest frequency character with the highest frequency character
        bool replaced = false;
        for (char& c : input) {
            if (c == lowestFreqChar && !replaced) {
                c = highestFreqChar;
                replaced = true;  // Make sure to replace only once
            }
        }

        // Output the modified string
        cout << input << endl;
    }

    return 0;
}
