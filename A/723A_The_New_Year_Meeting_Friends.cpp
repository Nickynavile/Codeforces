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
	int x1, x2, x3; cin >> x1 >> x2 >> x3; int ans = 0;
	int arr[] = {x1, x2, x3};

	//Code
	sort(arr, arr + 3);
	ans += abs(arr[0] - arr[1]);
	ans += abs(arr[1] - arr[2]);

	cout << ans;
	return 0;
}