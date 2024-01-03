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

		if (no <= 1399) {
			cout << "Division 4" << endl;
		}
		else if (no >= 1400 and no <= 1599) {
			cout << "Division 3" << endl;
		}
		else if (no >= 1600 and no <= 1899) {
			cout << "Division 2" << endl;
		}
		else if (no >= 1900) {
			cout << "Division 1" << endl;
		}
	}



	return 0;
}