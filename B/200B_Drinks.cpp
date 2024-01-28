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
	int t; double s = 0;
	cin >> t;

	//taking Input
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		s += n;
	}
	double ans = (s / t);
	cout << setprecision(12) << ans;

	return 0;
}

