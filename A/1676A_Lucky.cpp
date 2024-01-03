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

	//Main Logic
	while (t--) {
		int no;
		cin >> no;
		int fsum = 0, ssum = 0;

		//Calculating sum for last 3 digits
		for (int i = 0; i < 3; i++) {
			int rem = no % 10;
			ssum += rem;
			no = no / 10;
		}

		//Calculating sum for first 3 digits
		for (int i = 0; i < 3; i++) {
			int rem = no % 10;
			fsum += rem;
			no = no / 10;
		}

		//Printing Output
		if (fsum == ssum) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	return 0;
}