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
	int t; cin >> t;
	int arr[t];
	for (int i = 0; i < t; i++) {
		int no;
		cin >> no;
		arr[i] = no;
	}

	//Code
	for (int i = 0; i < t; i++) {
		if (arr[i] < 2) {
			cout << 0 << endl;
		}
		else {
			int s = floor(arr[i] / 2) + 1; //Start A from
			int ans = arr[i] - s;
			cout << ans << endl;
		}
	}

	return 0;
}