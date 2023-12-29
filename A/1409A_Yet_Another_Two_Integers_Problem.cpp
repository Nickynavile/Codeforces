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
	int t; cin >> t; vector<int> v;
	for (int i = 10; i >= 1; i--) {
		v.push_back(i);
	}

	//Code
	while (t--) {
		int a, b;
		cin >> a >> b;

		//Main Logic
		int t = b - a;
		int ans = 0;
		int i = 0;
		while (t) {
			int r = t / v[i];
			ans += r;
			t = t % v[i];
			i++;
		}
		cout << abs(ans) << endl;
	}

	return 0;
}