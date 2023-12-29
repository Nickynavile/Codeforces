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
	int a, b; cin >> a >> b;

	//Code
	if (a > b) {
		cout << b << " " << floor((a - b) / 2);
	}
	else {
		cout << a << " " << floor((b - a) / 2);
	}


	return 0;
}