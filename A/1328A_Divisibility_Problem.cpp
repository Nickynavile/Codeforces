#include<bits/stdc++.h>
using namespace std;

void c_p_c() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int solve(int a, int b) {
	if (a % b == 0) {
		return 0;
	}
	int d = a / b;
	int num = ((d + 1) * b) - a;
	return num;
}


int main() {
	c_p_c();

	//Taking Inputs
	int t; cin >> t;

	//Main Logic
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}



	return 0;
}