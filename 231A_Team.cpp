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
	int t; cin >> t; int ans = 0;
	while (t--) {
		int x , y, z;
		cin >> x >> y >> z;
		int n = x + y + z;
		if (n >= 2) {
			ans++;
		}
	}

	cout << ans << endl;

}