#include<bits/stdc++.h>
#include<string>
using namespace std;

void c_p_c() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	c_p_c();

	//Taking input
	string s; cin >> s;
	int n = s.length(); int count = 0;

	//Code
	for (int i = 0; i < n; i++) {
		if (isupper(s[i])) {
			count++;
		}
	}
	if (count > (n / 2)) {
		for (int i = 0; i < n; i++) {
			s[i] =  toupper(s[i]);
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			s[i] = tolower(s[i]);
		}
	}

	//Printinf=g output
	for (auto a : s) {
		cout << a;
	}

	return 0;
}