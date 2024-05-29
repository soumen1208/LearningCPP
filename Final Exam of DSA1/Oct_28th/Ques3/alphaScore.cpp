#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

int main() {
    int n; cin >> n;

    vector<int> nosOfStairs(n);
    for (int i = 0; i < n; i++) {
        cin >> nosOfStairs[i];
    }

    vector<int> alphaScores(n, 0);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nosOfStairs[i] > nosOfStairs[j]) {
                alphaScores[i] = (alphaScores[i] + nosOfStairs[j]) % MOD;
            }
        }
    }

    int totalAlphaScore = 0;
    for (int i = 0; i < n; i++) {
        totalAlphaScore = (totalAlphaScore + alphaScores[i]) % MOD;
    }

    cout << totalAlphaScore << endl;

    return 0;
}