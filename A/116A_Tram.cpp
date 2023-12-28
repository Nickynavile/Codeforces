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
	int t; cin >> t; int count = 0; int ans = 0;
	while (t--) {
		int a, b;
		cin >> a >> b;
		count -= a;
		count += b;
		ans = max(count, ans);
	}
	cout << ans;

	return 0;
}