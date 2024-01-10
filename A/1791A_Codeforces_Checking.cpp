#include<bits/stdc++.h>
using namespace std;

void c_p_c() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

string solve(string s, char n) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == n) {
			return "YES";
		}
	}
	return "NO";
}


int main() {
	c_p_c();

	//Taking Inputs
	int t; cin >> t; string s = "codeforces";

	while (t--) {
		char n;
		cin >> n;
		cout << solve(s, n) << endl;
	}

	return 0;
}