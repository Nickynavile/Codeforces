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

	int n;
	cin >> n;
	if (n <= 2) {
		cout << "NO";
	}
	else if (n % 2 == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}