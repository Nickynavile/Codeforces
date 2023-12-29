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
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int total_drink = k * l;

	int total_toasts = floor(total_drink / nl);
	int total_limes = c * d;
	int salt_enough = floor(p / np);

	vector<int> v{total_toasts, total_limes, salt_enough};
	int temp = *min_element(v.begin(), v.end());
	int ans = floor(temp / n);

	cout << ans;

	return 0;
}