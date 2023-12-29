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
	int t; cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		vector<int> v{a, b, c};
		sort(v.begin(), v.end());
		if (v[0] + v[1] == v[2]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}