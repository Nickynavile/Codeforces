#include<bits/stdc++.h>
#include<cmath>
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
	int n, t; cin >> n >> t;
	string s; cin >> s;
	while (t--) {
		for (int i = 0; i < n; i ++) {
			if (s[i] == 'G' and s[i - 1] == 'B') {
				swap(s[i], s[i - 1]);
				i++;
			}
		}
	}

	//Printing the Output
	for (int i = 0; i < n; i++) {
		cout << s[i];
	}

	return 0;
}