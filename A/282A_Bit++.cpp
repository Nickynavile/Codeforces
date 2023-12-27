#include<bits/stdc++.h>
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

	//Taking Input
	int t; cin >> t; int ans = 0;
	while (t--) {
		string op;
		cin >> op;
		if (op == "X++" || op == "++X") {
			ans++;
		}
		else {
			ans--;
		}
	}
	cout << ans << endl;
	return 0;
}