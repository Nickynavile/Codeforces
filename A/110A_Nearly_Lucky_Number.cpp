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
	string s;
	cin >> s;
	int no = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '4' or s[i] == '7') {
			no++;
		}
	}
	if (no == 4 or no == 7) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}