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
	int k , l, m, n, d; cin >> k >> l >> m >> n >> d;
	set<int> s;

	//Code
	if (d >= k) {
		for (int i = k; i <= d; i = i + k) {
			s.insert(i);
		}
	}

	if (d >= l) {
		for (int i = l; i <= d; i = i + l) {
			s.insert(i);
		}
	}

	if (d >= m) {
		for (int i = m; i <= d; i = i + m) {
			s.insert(i);
		}
	}

	if (d >= n) {
		for (int i = n; i <= d; i = i + n) {
			s.insert(i);
		}
	}

	cout << s.size();

	return 0;
}