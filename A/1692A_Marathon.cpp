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

	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		//Main Logic
		int arr[] = {a, b, c, d};
		int ans = 0;
		for (int i = 1; i < 4; i++) {
			if (arr[i] > a) {
				ans++;
			}
		}

		//Priting Output
		cout << ans << endl;
	}


	return 0;
}