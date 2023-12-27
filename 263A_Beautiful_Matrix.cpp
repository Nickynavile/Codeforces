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
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int no;
			cin >> no;
			if (no == 1) {

				ans += abs(i - 2);
				ans += abs(j - 2);
				cout << ans << endl;
				return 0;
			}
		}
	}

	return 0;
}