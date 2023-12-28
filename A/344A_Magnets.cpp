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
	int t; cin >> t; int arr[t]; int ans = 1;
	for (int i = 0; i < t; i++) {
		int no;
		cin >> no;
		arr[i] = no;
	}

	//Code
	for (int i = 1; i < t; i++) {
		if (arr[i] != arr[i - 1]) {
			ans++;
		}
	}

	//Printing Output
	cout << ans;

	return 0;
}