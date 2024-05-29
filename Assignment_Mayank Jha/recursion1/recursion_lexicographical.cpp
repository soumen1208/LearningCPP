#include <bits/stdc++.h>
using namespace std;


void lexNumbers(int n)
{
	vector<string> s;

	for (int i = 0; i <=n; i++) {
		s.push_back(to_string(i));
	}

	sort(s.begin(), s.end());
	vector<int> ans;
	for (int i = 0; i <=n; i++)
		ans.push_back(stoi(s[i]));

	for (int i = 0; i <=n; i++)
		cout << ans[i] << " ";
}

int main()
{

	int n;
    cin>>n;
	lexNumbers(n);
	return 0;
}
