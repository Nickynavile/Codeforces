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

	//Taking Inputs
	string a, b, c; cin >> a >> b >> c;
	string temp = "";
	for (int i = 0; i < b.length(); i++) {
		a += b[i];
	}
	sort(a.begin(), a.end());
	sort(c.begin(), c.end());

	if (a.length() < c.length()) {
		cout << "NO";
		return 0;
	}

	int check = 0;
	for (int i = 0; i < c.length(); i++) {
		if (c[i] == a[check]) {
			check++;
		}
	}

	//Printing Output
	if (check == a.length()) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}