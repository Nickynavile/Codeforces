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

	//Start code Here
	int n; cin >> n; int arr[n]; int ans = 0;
	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;
		arr[i] = no;;
	}

	//Code
	int min = arr[0], max = arr[0];
	int minindex = 0, maxindex = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] <= min) {
			minindex = i;
			min = arr[i];
		}
		else if (arr[i] > max) {
			maxindex = i;
			max = arr[i];
		}
	}

	//Printing Output
	if (maxindex > minindex) {
		int ans = maxindex - 1 + n - minindex - 1;
		cout << ans;
	}
	else {
		int ans = maxindex - 1 + n - minindex;
		cout << ans;
	}

	return 0;
}