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
	int n; string s; cin >> n >> s; int ans = 0;

	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}