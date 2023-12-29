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
	int x1, x2, x3, x4; cin >> x1 >> x2 >> x3 >> x4;
	int arr[] = {x1, x2, x3, x4};

	sort(arr, arr + 4);

	//Printing Output
	for (int i = 0; i < 3; i++) {
		cout << arr[3] - arr[i] << " ";
	}

	return 0;
}