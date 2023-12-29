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
	int count = 0;

	//Code
	for (int i = 0; i < t; i++) {
		int no;
		cin >> no;
		if (count == 0 and no < 0) {
			ans++;
		}
		else {
			count += no;
		}
	}

	cout << ans;


	return 0;
}