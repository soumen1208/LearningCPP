#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Input
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort the list in ascending order
    sort(arr.begin(), arr.end());

    // Output the sorted list
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
