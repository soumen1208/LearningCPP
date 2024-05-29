#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
static constexpr unsigned K = 1000 + 1;

static std::vector<bool> winner(K * K);

static bool testCase(unsigned n, unsigned m) {
	return winner[n + m * K];
}

static void testCase() {
	unsigned n, m, p, q;
	std::cin >> n >> m >> p >> q;
	std::cout << (testCase(n - p, m - q) ? "YES\n" : "NO\n");
}

static void final_pos(unsigned n, unsigned m, unsigned dn, unsigned dm) {
	const unsigned dp = dn + K * dm;
	for(unsigned p = n + m * K; (n += dn) != K && (m += dm) != K;)
		winner[p += dp] = true;
}

static void final_winner(unsigned n, unsigned m) {
	final_pos(n, m, 1, 0);
	final_pos(n, m, 1, 1);
	final_pos(n, m, 0, 1);
}

static void init() {
	for(unsigned md = 0; md != K; ++md)
		for(unsigned m = md, n = 0; n != md + 1; --m, ++n)
			if(!winner[n + m * K])
				final_winner(n, m);
	for(unsigned nd = 1; nd != K; ++nd)
		for(unsigned n = nd, m = K - 1; m != nd - 1; ++n, --m)
			if(!winner[n + m * K])
				final_winner(n, m);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	init();
	unsigned T;
	std::cin >> T;
	while(T--)
		testCase();
} 