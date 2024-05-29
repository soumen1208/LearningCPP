// #include<bits/stdc++.h>

// using namespace std;

// vector<bool> Eratosthenes(int limit) {
//     vector<bool> isPrime(limit + 1, true);
//     isPrime[0] = isPrime[1] = false;

//     for (int p = 2; p * p <= limit; p++) {
//         if (isPrime[p]) {
//             for (int i = p * p; i <= limit; i += p) {
//                 isPrime[i] = false;
//             }
//         }
//     }

//     return isPrime;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int m, n;
//         cin >> m >> n;

//         vector<bool> isPrime = Eratosthenes(n);

//         for (int i = m; i <= n; i++) {
//             if (isPrime[i]) {
//                 cout << i << endl;
//             }
//         }

//         if (T > 0) {
//             cout << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// #define M 31625
// using namespace std;

// bool dPrimes[M];

// int main()
// {
//     memset(dPrimes,1,sizeof(dPrimes));
//     dPrimes[0] = false;
//     dPrimes[1] = false;

//  for(int i = 2; i < M; i+=1)
//  {
//      if(dPrimes[i])
//      {
//          for(long long int j = i*i; j < M; j+=i)
//             dPrimes[j] = false;
//      }
//  }

//     int k;
//     cin >> k;
//     for(int i = 0; i < k; i++)
//     {
//        long long int n,m;
//         cin>>n>>m;
//         bool eratos[m-n+1];
//         memset(eratos,1,sizeof(eratos));
        
//         for(int i = 2; i <sqrt(m); i++)
//         {
//             if(dPrimes[i])
//             {
//                 for(long long int j = n; j <= m; j++)
//                 {
//                     if(j == i)
//                         continue;
                        
//                     if(j%i == 0)
//                         eratos[j - n] = false;
//                 }
//             }
//             }
        
//         for(int i = 0; i <= m-n; i++)
//         {
//             if(eratos[i] && i+n != 1)
//                 {
//                     long long int ans = i+n;
//                     cout << ans <<"\n";
//                 }
//         }
//         cout<<"\n";
//     }
    
//     return 0;
// }


// 4th solution


#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void eratos(int lt, vector<int> &dPrimes) {
    vector<bool> isPrime(lt + 1, true);
    for (int p = 2; p * p <= lt; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= lt; i += p) {
                isPrime[i] = false;
            }
        }
    }
    for (int p = 2; p <= lt; ++p) {
        if (isPrime[p]) {
            dPrimes.push_back(p);
        }
    }
}

void sieve_of_Eratosthenes(int m, int n) {
    int lt = floor(sqrt(n)) + 1;
    vector<int> dPrimes;
    eratos(lt, dPrimes);
    
    int lt2 = n - m + 1;
    vector<bool> isPrime(lt2, true);
    for (int i = 0; i < dPrimes.size(); ++i) {
        int start = max(dPrimes[i] * dPrimes[i], (m + dPrimes[i] - 1) / dPrimes[i] * dPrimes[i]);
        for (int j = start; j <= n; j += dPrimes[i]) {
            isPrime[j - m] = false;
        }
    }

    for (int i = max(m, 2); i <= n; ++i) {
        if (isPrime[i - m]) {
            cout << i << endl;
        }
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int m, n;
        cin >> m >> n;
        sieve_of_Eratosthenes(m, n);
    }

    return 0;
}











