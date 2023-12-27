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

	int k, n, w; cin >> k >> n >> w;
	int i = 1; int total_amount = 0;
	while (w--) {
		total_amount += i * k;
		i++;
	}
	if (total_amount <= n) {
		cout << 0;
	}
	else {
		cout << (total_amount - n);
	}

	return 0;
}