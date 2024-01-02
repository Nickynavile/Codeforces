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
		int n; cin >> n;
		int arr[n]; int temp[n];
		for (int i = 0; i < n; i++) {
			int no;
			cin >> no;
			arr[i] = no;
			temp[i] = no;
		}

		sort(temp, temp + n);
		int distinct;
		if (temp[0] == temp[1]) {
			distinct =  temp[n - 1];
		}
		else {
			distinct = temp[0];
		}

		//Printing Output
		for (int i = 0; i < n; i++) {
			if (arr[i] == distinct) {
				cout << (i + 1) << endl;
				continue;
			}
		}
	}

	return 0;
}