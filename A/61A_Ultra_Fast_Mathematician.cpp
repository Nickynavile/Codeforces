#include<bits/stdc++.h>
#include <iomanip>
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
	string n, d; cin >> n;
	cin >> d;
	string ans = "";

	//Code
	for (int i = 0; i < d.size(); i++) {
		if (n[i] == d[i]) {
			ans += '0';
		}
		else {
			ans += '1';
		}
	}

	//Printing Output
	for (int i = 0; i < d.size(); i++) {
		cout << ans[i];
	}


	return 0;
}