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

	//Taking Inputs
	int no; cin >> no;
	int i = 5; int ans = 0;
	while (i > 0) {
		if (no >= i) {
			ans += (no / i);
			no = no % i;
		}
		i--;
	}
	cout << ans << endl;

	return 0;
}