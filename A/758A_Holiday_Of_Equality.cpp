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
	int t; cin >> t; int arr[t]; int ans = 0;
	for (int i = 0; i < t; i++) {
		int no;
		cin >> no;
		arr[i] = no;
	}

	//Main Logic
	int max = *max_element(arr, arr + t);
	for (int i = 0; i < t; i++) {
		ans += (max - arr[i]);
	}

	//Prinitng Ans
	cout << ans;


	return 0;
}