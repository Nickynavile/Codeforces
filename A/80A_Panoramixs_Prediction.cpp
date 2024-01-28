#include<bits/stdc++.h>
using namespace std;

void c_p_c() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool checkprime(int no) {
	for (int i = 2; i < no; i++) {
		if (no % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	c_p_c();
	int n, m;
	cin >> n >> m;
	if (checkprime(n) && checkprime(m)) {
		string ans = "YES";
		for (int i = n + 1; i < m; i++) {
			if (checkprime(i)) {
				ans = "NO";
			}
		}
		cout << ans ;
	}
	else {
		cout << "NO";
	}

	return 0;
}

