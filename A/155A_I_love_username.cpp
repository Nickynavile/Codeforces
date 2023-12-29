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
	int t; cin >> t; int arr[t];
	for (int i = 0; i < t; i++) {
		int no;
		cin >> no;
		arr[i] = no;
	}

	//Code
	int min = arr[0]; int max = arr[0]; int ans = 0;
	//Code
	for (int i = 1; i < t; i++) {
		if (arr[i]<min or arr[i]>max) {
			ans++;
			if (arr[i] < min) {
				min = arr[i];
			}
			else {
				max = arr[i];
			}
		}
	}

	//Printing Output
	cout << ans;

	return 0;
}