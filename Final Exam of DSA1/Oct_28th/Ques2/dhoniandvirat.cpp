#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> solution(200, 0);  
    solution[0] = 1; 

    int cart = 0; 
    
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < solution.size(); j++) {
            int product = solution[j] * i + cart;
            solution[j] = product % 10;
            cart = product / 10;
        }
    }
    
    int k;
    for (k = solution.size() - 1; k >= 0; k--) {
        if (solution[k] != 0) {
            break;
        }
    }


    for (int i = k; i >= 0; i--) {
        cout << solution[i];
    }

    cout << endl;

    return 0;
}
