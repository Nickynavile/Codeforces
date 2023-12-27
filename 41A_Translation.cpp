#include<bits/stdc++.h>
using namespace std;

void c_p_c() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	c_p_c();

	//Taking inputs
	string s; string t;
	cin >> s;
	cin >> t;

	//Logic
	int n = s.length();
	bool ans = true;
	for (int i = 0; i < n; i++) {
		if (s[i] != t[n - 1 - i]) {
			ans = false;
		}
	}

	//Printing Output
	if (ans == true) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}