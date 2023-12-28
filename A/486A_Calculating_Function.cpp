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
	long long int t; cin >> t; long long int ans = 0; double d = 2.0;

	//Code
	if (t % 2 == 0) {
		ans += t / 2;
	}
	else {
		ans -= ceil(t / d);
	}

	//Printing Output
	cout << ans;

	return 0;
}