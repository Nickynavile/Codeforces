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
	int k, r; cin >> k >> r; int ans = 0;
	int d = k;

	int i = 1;
	//Code
	while (true) {
		ans++;
		d = k * i;
		int rem = d % 10;
		if (rem == r or rem == 0) {
			break;
		}
		i++;
	}

	cout << ans;

	return 0;
}