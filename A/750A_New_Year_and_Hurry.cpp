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
	int n, k; cin >> n >> k; int ans = 0 ;
	int time = 4 * 60; //As he has only 4 Hours

	//Code
	int rem_time = time - k;
	for (int i = 1; i <= n; i++) {
		if (rem_time - (5 * i) >= 0) {
			ans++;
			rem_time -= 5 * i;
		}
		else {
			break;
		}
	}

	//Printing Output
	cout << ans;

	return 0;
}