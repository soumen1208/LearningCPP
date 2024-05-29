#include <iostream>
using namespace std;

long long aliceDInt(int n) {
    long long a = 2;
    long long b = 3;
    long long c;
    if (n == 1) return 2;
    if (n == 2) return 3;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int n;
        cin >> n;
        long long ans = aliceDInt(n);
        cout << "#"<< i << " : " << ans << endl;
    }

    return 0;
}