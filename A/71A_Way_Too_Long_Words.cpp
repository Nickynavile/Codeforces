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

	//input and decleration
	int t; cin >> t;
	while (t--) {
		string name;
		cin >> name;
		string ans = "";
		int n = name.length();
		if (n <= 10) {
			cout << name << endl;
		}
		else {
			ans += name[0];
			ans += to_string(n - 2);
			ans += name[n - 1];
			cout << ans << endl;

		}

	}

	return 0;
}