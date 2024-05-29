#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> cntNos(6, 0);

    for (int i = 0; i < n; i++) {
        if (arr[i] == 4) {
            cntNos[0]++;
        } else if (arr[i] == 8 && cntNos[0] > cntNos[1]) {
            cntNos[1]++;
        } else if (arr[i] == 15 && cntNos[1] > cntNos[2]) {
            cntNos[2]++;
        } else if (arr[i] == 16 && cntNos[2] > cntNos[3]) {
            cntNos[3]++;
        } else if (arr[i] == 23 && cntNos[3] > cntNos[4]) {
            cntNos[4]++;
        } else if (arr[i] == 42 && cntNos[4] > cntNos[5]) {
            cntNos[5]++;
        }
    }

    int removeElement = n - cntNos[5] * 6;

    cout << removeElement << endl;

    return 0;
}