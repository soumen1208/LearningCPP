// C/C++ program to find maximum product by breaking
// the Integer
#include <bits/stdc++.h>
using namespace std;

// method return x^a in log(a) time
int sol(int x, int y)
{
	int res = 1;
	while (y) {
		if (y & 1)
			res = res * x;
		x = x * x;
		y >>= 1;
	}
	return res;
}

// Method returns maximum product obtained by
// breaking N
int breakPosInteger(int n)
{
	// base case 2 = 1 + 1
	if (n == 2)
		return 1;

	// base case 3 = 2 + 1
	if (n == 3)
		return 2;

	int maximumProduct;

	// breaking based on mod with 3
	switch (n % 3) {
	// If divides evenly, then break into all 3
	case 0:
		maximumProduct = sol(3, n / 3);
		break;

	// If division gives mod as 1, then break as
	// 4 + power of 3 for remaining part
	case 1:
		maximumProduct = 2 * 2 * sol(3, (n / 3) - 1);
		break;

	// If division gives mod as 2, then break as
	// 2 + power of 3 for remaining part
	case 2:
		maximumProduct = 2 * sol(3, n / 3);
		break;
	}
	return maximumProduct;
}

// Driver code to test above methods
int main()
{
    int n;
    cin>>n;
	int maximumProduct = breakPosInteger(n);
	cout << maximumProduct << endl;
	return 0;
}
