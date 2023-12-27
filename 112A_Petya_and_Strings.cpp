#include<bits/stdc++.h>
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

	//Taking Input
	string m, n; cin >> m >> n;
	int l = m.length();
	for (int i = 0; i < l; i++) {
		m[i] = tolower(m[i]);
		n[i] = tolower(n[i]);
	}

	if (m < n) {
		cout << -1 << endl;
	}
	else if (m == n) {
		cout << 0 << endl;
	}
	else {
		cout << 1 << endl;
	}

	return 0;
}