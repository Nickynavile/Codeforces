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
	int n, x, y, z;
	cin >> n;
	int xsum = 0, ysum = 0, zsum = 0;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> z;
		xsum += x;
		ysum += y;
		zsum += z;
	}
	if (xsum == 0 and ysum == 0 and zsum == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}