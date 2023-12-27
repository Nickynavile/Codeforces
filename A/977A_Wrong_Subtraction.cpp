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
	int n, k; cin >> n >> k;
	while (k--) {
		if ((n % 10) != 0) {
			n = n - 1;
		}
		else {
			n = n / 10;
		}
	}

	cout << n;
	return 0;
}