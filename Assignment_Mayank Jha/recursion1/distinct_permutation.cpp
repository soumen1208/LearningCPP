#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


void permute(int i, string &s)
{
	if (i == (s.length() - 1)) {
		cout << s << endl;
		return;
	}


	for (int j = i; j < s.length(); j++) {
		if (j>i && s[i] == s[j])
			continue;
		if (j>i && s[j-1] == s[j]) {
			continue;
		}
	
		swap(s[i], s[j]);
	
		permute(i + 1, s);
	
		swap(s[i], s[j]);
	}
}

int main()
{
	string s;
	cin>>s;
	
	
	sort(s.begin(), s.end());

	
	permute(0, s);
	return 0;
}


