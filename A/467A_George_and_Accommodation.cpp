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
	int t; cin >> t; int ans = 0;

	//Code
	while (t--) {
		int p, q;
		cin >> p >> q;
		if ((q - p) >= 2) {
			ans++;
		}
	}

	//Printing Output
	cout << ans;

	return 0;
}