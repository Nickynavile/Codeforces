#include<bits/stdc++.h>
#include <iomanip>
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
	int n; cin >> n; string ans = "I hate";

	//Code
	for (int i = 2; i <= n; i++) {
		ans += " that ";
		if (i % 2 == 0) {
			ans += "I love";
		}
		else {
			ans += "I hate";
		}
	}
	ans += " it";

	//Printing Output
	for (int i = 0; i < ans.length(); i++) {
		cout << ans[i];
	}

	return 0;
}