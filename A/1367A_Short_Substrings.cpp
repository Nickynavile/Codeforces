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
		string a = "";
		string b;
		cin >> b;

		//For size is exactly 2
		if (b.size() == 2) {
			a += b;
			//Printing Output
			for (int i = 0 ; i < a.length(); i++) {
				cout << a[i];
			}
		}

		//For all other cases
		else {
			a += b[0];
			for (int i = 1; i < b.size(); i = i + 2) {
				a += b[i];
			}
			//Printing Output
			for (int i = 0 ; i < a.length(); i++) {
				cout << a[i];
			}
		}
		cout << endl;
	}

	return 0;
}