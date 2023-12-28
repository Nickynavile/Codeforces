#include<bits/stdc++.h>
#include<cmath>
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
	double n, h; cin >> n >> h; int ans = 0.0;
	while (n--) {
		int a;
		cin >> a;
		ans += ceil(a / h);
	}
	cout << ans;

	return 0;
}