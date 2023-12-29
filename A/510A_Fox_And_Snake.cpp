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
	int n, m; cin >> n >> m;

	int i = 1;
	while (i <= n) {
		int d = m;
		int r = m - 1;
		if (i % 4 == 1 || i % 4 == 3) {
			while (d--) {
				cout << "#";
			}
			cout << endl;
		}
		else if (i % 4 == 2) {
			while (r--) {
				cout << ".";
			}
			cout << "#" << endl;
		}
		else if (i % 4 == 0) {
			cout << "#";
			while (r--) {
				cout << ".";
			}
			cout << endl;
		}
		i++;
	}

	return 0;
}